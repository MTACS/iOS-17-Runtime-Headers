
@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {
    <UIViewControllerAnimatedTransitioning_Keyboard> * _animator;
    <UIViewControllerContextTransitioning> * _context;
    UIInputViewSetPlacement * _endPlacement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)controllerWithContext:(id)arg1;

- (void).cxx_destruct;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;

@end
