
@interface TSTMergeRegionMapIterator : NSObject {
    struct __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>> { 
        struct __hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> { 
            void *__node_; 
        } __i_; 
    }  mMergeRegionIterator;
    TSTMergeRegionMap * mMergeRegionMap;
}

- (id).cxx_construct;
- (void)dealloc;
- (bool)hasNextMergeRegion;
- (id)initWithMergeRegionMap:(id)arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })nextMergeRegion;
- (void)reset;

@end
