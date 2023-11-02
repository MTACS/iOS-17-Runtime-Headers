
@interface AVMobileContentTabPresentationContext : NSObject {
    UIViewController * _customInfoViewController;
    double  _presentationHeight;
    unsigned long long  _state;
    AVMobileContentTabTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) UIViewController *customInfoViewController;
@property (nonatomic, readonly) double presentationHeight;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) AVMobileContentTabTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)customInfoViewController;
- (double)presentationHeight;
- (void)setCustomInfoViewController:(id)arg1;
- (void)setPresentationHeight:(double)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTransitionContext:(id)arg1;
- (unsigned long long)state;
- (id)transitionContext;

@end
