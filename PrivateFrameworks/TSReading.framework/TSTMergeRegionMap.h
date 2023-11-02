
@interface TSTMergeRegionMap : TSPObject {
    struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> { 
        struct __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  mCellIDToMergeRegionTopLeft;
    struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowSize>>> { 
        struct __hash_table<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>>, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher>, std::allocator<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<TSUColumnRowCoordinate, std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, std::equal_to<TSUColumnRowCoordinate>, TSTCellIDHasher>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  mMergeRegionTopLeftToMergeRegionSize;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mUnionedMergeRange;
}

+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (bool)find:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)hasRangeSpanningRows;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;
- (id)initWithContext:(id)arg1;
- (bool)insert:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)iterator;
- (id)mergedGridIndicesForDimension:(int)arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRangeForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)partiallyIntersectsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)partiallyIntersectsCellRegion:(id)arg1;
- (bool)remove:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })unionedMergeRange;

@end
