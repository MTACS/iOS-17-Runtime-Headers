
@interface OZFxPrincipalDelegate : NSObject <FxPlugPrincipalDelegate> {
    struct shared_ptr<OZFxPlugSharedLock> { 
        struct OZFxPlugSharedLock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fxPlugLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fxServiceProxy;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
