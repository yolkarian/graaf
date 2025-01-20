#pragma once

namespace graaf {


template <typename WEIGHTED_EDGE_T, typename>
auto get_weight(const WEIGHTED_EDGE_T& edge) {
  return edge.get_weight();
}

template <typename EDGE_T,typename>
EDGE_T get_weight(const EDGE_T& edge) {
  return edge;
}

template <typename EDGE_T, typename >
int get_weight(const EDGE_T& /*edge*/) {
  // By default, an edge has unit weight
  return 1;
}

}  // namespace graaf