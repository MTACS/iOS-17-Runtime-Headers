
@interface DEPatternContext : NSObject {
    struct shared_ptr<siri::dialogengine::PatternContext> { 
        struct PatternContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext {} *x1; struct __shared_weak_count {} *x2; } This;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext {} *x1; struct __shared_weak_count {} *x2; })This;
- (struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext {} *x1; struct __shared_weak_count {} *x2; })getSharedPtr;
- (id)init;
- (id)initWithSharedPtr:(void*)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
