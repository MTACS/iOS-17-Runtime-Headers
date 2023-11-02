
@interface CHDrawingContext : NSObject {
    CHClassifiableDrawing * _classifiableDrawing;
    unsigned long long  _edgeIndex;
    long long  _numberOfSegments;
    long long  _numberOfSubstrokes;
    struct set<long, std::less<long>, std::allocator<long>> { 
        struct __tree<long, std::less<long>, std::allocator<long>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<long>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _strokeGroup;
}

@property (nonatomic, readonly) CHClassifiableDrawing *classifiableDrawing;
@property (nonatomic, readonly) unsigned long long edgeIndex;
@property (nonatomic, readonly) long long numberOfSegments;
@property (nonatomic, readonly) long long numberOfSubstrokes;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{set<long' */ struct  strokeGroup; /* unknown property attribute:  std::less<long>>=Q}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classifiableDrawing;
- (unsigned long long)edgeIndex;
- (id)initWithEdgeIndex:(unsigned long long)arg1 numberOfSubstrokes:(long long)arg2 numberOfSegments:(long long)arg3 classifiableDrawing:(id)arg4 strokeGroup:(struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::less<long>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg5;
- (long long)numberOfSegments;
- (long long)numberOfSubstrokes;
- (struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::less<long>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })strokeGroup;

@end
