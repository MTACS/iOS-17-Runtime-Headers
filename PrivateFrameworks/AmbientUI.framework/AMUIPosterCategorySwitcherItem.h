
@interface AMUIPosterCategorySwitcherItem : NSObject <AMUIPosterViewControllerDelegate, AMUISwitcherItem> {
    int  _appearState;
    PRSPosterConfiguration * _configuration;
    <AMUIPosterCategorySwitcherItemDelegate> * _delegate;
    UIView * _itemView;
    NSLayoutConstraint * _labelBottomConstraint;
    NSLayoutConstraint * _labelLeftConstraint;
    NSLayoutConstraint * _labelRightConstraint;
    NSLayoutConstraint * _labelTopConstraint;
    NSUUID * _lastInstanceIdentifier;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    AMUIPosterViewController * _posterViewController;
    double  _presentationProgress;
    bool  _titleLabelOnTopEdge;
    AMUIPhotosLabelView * _titleLabelView;
    bool  _titleLabelVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSObject> *identifier;
@property (nonatomic, readonly) UIView *itemView;
@property (nonatomic, readonly) UIViewController *itemViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_noteWindowWillRotate:(id)arg1;
- (void)_updateClipping;
- (void)_updateContentMode;
- (void)_updateLabelConstraintsForInterfaceOrientation:(long long)arg1;
- (void)_updateTitleLabelVisibility;
- (void)dealloc;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)itemView;
- (id)itemViewController;
- (void)posterViewController:(id)arg1 didRequestInlineAuthenticationWithUnlockDestination:(id)arg2;
- (void)posterViewController:(id)arg1 relinquishExtensionInstanceIdentifier:(id)arg2;
- (void)posterViewController:(id)arg1 setChromeVisibility:(bool)arg2 withAnimationSettings:(id)arg3 animationFence:(id)arg4;
- (bool)posterViewControllerHasInlineAuthenticated:(id)arg1;
- (bool)posterViewControllerIsAuthenticated:(id)arg1;
- (id)posterViewControllerRequestExtensionInstanceIdentifier:(id)arg1;
- (void)switcher:(id)arg1 didMoveToWindow:(id)arg2;
- (void)switcher:(id)arg1 updateItemForPresentationProgress:(double)arg2;
- (void)switcher:(id)arg1 willMoveToWindow:(id)arg2;
- (void)switcherItemDidAppear:(id)arg1;
- (void)switcherItemDidDisappear:(id)arg1;
- (void)switcherItemWillAppear:(id)arg1;
- (void)switcherItemWillDisappear:(id)arg1;

@end
