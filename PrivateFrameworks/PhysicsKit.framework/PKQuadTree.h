
@interface PKQuadTree : NSObject {
    struct shared_ptr<QuadTree> { 
        struct QuadTree {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quadTree;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
