
@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating> {
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
    }  mBoundingCellRange;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mCellID;
    struct set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>> { 
        struct __tree<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUColumnRowRect, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mCellRangeSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })getNext;
- (id)initWithCellRegion:(id)arg1;
- (void)terminate;

@end
