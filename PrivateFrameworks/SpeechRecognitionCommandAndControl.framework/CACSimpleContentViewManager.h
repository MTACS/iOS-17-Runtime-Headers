
@interface CACSimpleContentViewManager : NSObject <CACContentViewManager> {
    long long  _activeDimmingTransactionID;
    <CACSimpleContentViewManagerDelegate> * _contentViewManagerDelegate;
    long long  _pendingDimmingTransactionID;
    UIViewController<CACViewController> * _viewController;
}

@property long long activeDimmingTransactionID;
@property (nonatomic) <CACSimpleContentViewManagerDelegate> *contentViewManagerDelegate;
@property long long pendingDimmingTransactionID;
@property (nonatomic, retain) UIViewController<CACViewController> *viewController;

- (void).cxx_destruct;
- (void)_hideAnimated:(bool)arg1;
- (long long)activeDimmingTransactionID;
- (id)contentViewManagerDelegate;
- (void)hide;
- (void)hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)hideWithoutAnimation;
- (bool)isOutOfProcess;
- (bool)isOverlay;
- (bool)isPhysiciallyInteractiveOverlay;
- (bool)isShowing;
- (long long)pendingDimmingTransactionID;
- (void)setActiveDimmingTransactionID:(long long)arg1;
- (void)setContentViewManagerDelegate:(id)arg1;
- (void)setPendingDimmingTransactionID:(long long)arg1;
- (void)setViewController:(id)arg1;
- (void)showViewControllerWithCreationHandler:(id /* block */)arg1 updateHandler:(id /* block */)arg2;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (id)viewController;

@end
