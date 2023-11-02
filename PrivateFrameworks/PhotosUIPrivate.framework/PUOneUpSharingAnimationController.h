
@interface PUOneUpSharingAnimationController : _UISheetAnimationController <PUOneUpAssetTransition> {
    <PUOneUpSharingAnimationControllerDelegate> * _delegate;
    bool  _interruptibleAnimatorForTransitionWasCalled;
    PUOneUpPhotosSharingTransitionContext * _oneUpTransitionContext;
    UIViewController<PUOneUpAssetTransitionViewController> * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpSharingAnimationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUOneUpPhotosSharingTransitionContext *oneUpTransitionContext;
@property (nonatomic, readonly) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_configurePhotoView:(id)arg1 withContentHelper:(id)arg2;
- (void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)arg1 inTransitioningView:(id)arg2;
- (id)delegate;
- (id)init;
- (id)initWithTransitionContext:(id)arg1 presentingViewController:(id)arg2;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (id)oneUpTransitionContext;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
