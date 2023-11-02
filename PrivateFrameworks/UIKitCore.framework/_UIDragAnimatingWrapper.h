
@interface _UIDragAnimatingWrapper : NSObject <UIDragAnimating> {
    UIViewPropertyAnimator * _animator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_api_addCompletion:(id /* block */)arg1;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)initWithPropertyAnimator:(id)arg1;

@end