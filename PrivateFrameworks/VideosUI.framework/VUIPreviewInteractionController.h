
@interface VUIPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    UICollectionView * _collectionView;
    UIViewPropertyAnimator * _commitPropertyAnimator;
    NSIndexPath * _currentIndexPath;
    <VUIPreviewInteractionControllerDelegate> * _delegate;
    VUIDialogPresentationController * _dialogPresentationController;
    UIViewController * _presentedViewController;
    UIViewController * _presentingViewController;
    UIPreviewInteraction * _previewInteraction;
    UIViewPropertyAnimator * _previewPropertyAnimator;
    bool  _previewTransitionEnded;
    UICollectionViewCell * _stashedCell;
    VUIPresentationContainerViewController * _wrapperViewController;
}

@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIPreviewInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_cleanupPreviewInteraction;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)currentIndexPath;
- (void)dealloc;
- (id)delegate;
- (void)dismissConfirmation;
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentedViewController;
- (id)presentingViewController;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
