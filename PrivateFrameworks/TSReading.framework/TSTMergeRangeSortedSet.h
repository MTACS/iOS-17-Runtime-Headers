
@interface TSTMergeRangeSortedSet : NSObject {
    struct __tree_const_iterator<TSTMergeRangeElem, std::__tree_node<TSTMergeRangeElem, void *> *, long> { 
        void *__ptr_; 
    }  mIter;
    NSObject<OS_dispatch_semaphore> * mSem;
    void * mSet;
}

- (id).cxx_construct;
- (void)addRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 andSize:(struct CGSize { double x1; double x2; })arg2 andPaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 andIsCheckbox:(bool)arg4;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })begin;
- (unsigned long long)count;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })getPaddingInsets;
- (struct CGSize { double x1; double x2; })getSize;
- (id)init;
- (bool)isCheckbox;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })iter;
- (void)reset;

@end
