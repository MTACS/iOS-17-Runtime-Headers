
@interface PXViewControllerDismissalInteractionController : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_logger;
    void $__lazy_storage_$_proxy;
    void currentBasicSwipeDownTransition;
    void currentSwipeDownDismissalController;
    void grabber;
    void grabberSwipeDownGestureRecognizer;
    void grabberTapGestureRecognizer;
    void isConfigured;
    void swipeDownGestureRecognizer;
    void transitioningViewController;
    void viewController;
    void viewControllerCanBeDismissed;
    void viewControllerTransition;
    void wantsInteractiveDismissal;
}

@property (nonatomic) bool viewControllerCanBeDismissed;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleSwipeDown:(id)arg1;
- (void)handleTapOnGrabAffordance:(id)arg1;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (void)setViewControllerCanBeDismissed:(bool)arg1;
- (bool)viewControllerCanBeDismissed;
- (void)viewControllerViewWillLayoutSubviews;

@end
