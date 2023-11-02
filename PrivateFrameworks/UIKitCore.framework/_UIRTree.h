
@interface _UIRTree : NSObject {
    NSMutableIndexSet * _allIndexes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _allIndexesRange;
    struct shared_ptr<_UIRTreeContainerNode<>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _root;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndex:(unsigned long long)arg1;
- (id)description;
- (id)init;

@end
