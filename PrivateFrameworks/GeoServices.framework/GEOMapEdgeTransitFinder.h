
@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {
    struct unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> { 
        struct __hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *>, std::allocator<std::__hash_node<geo::TransitEdgePiece, void *>>> { 
                struct __hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<geo::TransitEdgePiece>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<geo::TransitEdgePiece>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _piecesConsidered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildersInTile:(id)arg1 localPoint:(const void*)arg2 localRadiusSqr:(float)arg3 localSearch:(const void*)arg4 handler:(id /* block */)arg5;
- (bool)_checkEdgeForDuplicates:(const void*)arg1;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;

@end
