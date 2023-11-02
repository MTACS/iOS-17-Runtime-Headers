
@interface VUIDialogInteractionController : NSObject <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, VUIPreviewInteractionControllerDelegate> {
    UICollectionView * _collectionView;
    NSIndexPath * _currentIndexPath;
    <VUIDialogInteractionControllerDelegate> * _delegate;
    VUIDialogPresentationController * _dialogPresentationController;
    VUIPreviewInteractionController * _interactionController;
    bool  _isPresenting;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIViewController * _presentedViewController;
    UIViewController * _presentingViewController;
    VUIPresentationContainerViewController * _wrapperViewController;
}

@property (nonatomic, retain) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIDialogInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIPreviewInteractionController *interactionController;
@property (nonatomic) bool isPresenting;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)currentIndexPath;
- (id)delegate;
- (void)dismissConfirmation;
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;
- (id)interactionController;
- (void)interactionController:(id)arg1 didBeginForIndexPath:(id)arg2;
- (void)interactionController:(id)arg1 didEndForIndexPath:(id)arg2;
- (bool)interactionController:(id)arg1 shouldInteractionControllerBeginForIndexPath:(id)arg2;
- (bool)isPresenting;
- (void)longPressGestureRecognizerPressed:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentedViewController;
- (id)presentingViewController;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionController:(id)arg1;
- (void)setIsPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
