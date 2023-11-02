
@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder {
    struct unordered_set<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> { 
        struct __hash_table<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *> *>, std::allocator<std::__hash_node<GEORoadEdge *, void *>>> { 
                struct __hash_node_base<std::__hash_node<GEORoadEdge *, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<GEORoadEdge *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<GEORoadEdge *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _roadsConsidered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildersInTile:(id)arg1 localPoint:(const void*)arg2 localRadiusSqr:(float)arg3 localSearch:(const void*)arg4 handler:(id /* block */)arg5;
- (bool)_checkEdgeForDuplicates:(const void*)arg1;
- (void)dealloc;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;

@end
