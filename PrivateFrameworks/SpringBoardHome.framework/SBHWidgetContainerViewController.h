
@interface SBHWidgetContainerViewController : UIViewController <SBHMultiplexingViewControllerObserver> {
    NSString * _applicationName;
    struct SBIconApproximateLayoutPosition { 
        unsigned long long horizontal; 
        unsigned long long vertical; 
    }  _approximateLayoutPosition;
    UIView * _deactivationSnapshotView;
    <SBHWidgetContainerViewControllerDelegate> * _delegate;
    unsigned long long  _gridSizeClass;
    bool  _requiresClippingToBounds;
    bool  _showsSnapshotWhenDeactivated;
    unsigned long long  _userVisibilityStatus;
    UIViewController * _widgetViewController;
}

@property (nonatomic) bool allowsEdgeAntialiasing;
@property (nonatomic, readonly, copy) NSString *applicationName;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; } approximateLayoutPosition;
@property (getter=isBlockedForScreenTimeExpiration, nonatomic) bool blockedForScreenTimeExpiration;
@property (nonatomic, retain) UIView *deactivationSnapshotView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHWidgetContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long gridSizeClass;
@property (readonly) unsigned long long hash;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) bool requiresClippingToBounds;
@property (nonatomic) bool showsSnapshotWhenDeactivated;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic, readonly) bool wantsSystemMaterialBackground;
@property (nonatomic, readonly) UIViewController *widgetViewController;

- (void).cxx_destruct;
- (id)_avocadoViewController;
- (id)_avocadoWidget;
- (bool)_canShowWhileLocked;
- (void)_clearDeactivationSnapshotView;
- (void)_updateWidgetVisibility;
- (id)_widgetExtensionBundleIdentifier;
- (bool)allowsEdgeAntialiasing;
- (id)applicationName;
- (struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; })approximateLayoutPosition;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (id)deactivationSnapshotView;
- (id)delegate;
- (id)description;
- (unsigned long long)gridSizeClass;
- (id)initWithWidgetViewController:(id)arg1 gridSizeClass:(unsigned long long)arg2 applicationName:(id)arg3;
- (bool)isBlockedForScreenTimeExpiration;
- (bool)isPaused;
- (void)loadView;
- (void)multiplexingViewControllerDidActivate:(id)arg1;
- (void)multiplexingViewControllerWillDeactivate:(id)arg1;
- (unsigned long long)presentationMode;
- (bool)requiresClippingToBounds;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setApproximateLayoutPosition:(struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setBlockedForScreenTimeExpiration:(bool)arg1;
- (void)setDeactivationSnapshotView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setRequiresClippingToBounds:(bool)arg1;
- (void)setShowsSnapshotWhenDeactivated:(bool)arg1;
- (void)setUserVisibilityStatus:(unsigned long long)arg1;
- (bool)showsSnapshotWhenDeactivated;
- (id)snapshotView;
- (unsigned long long)userVisibilityStatus;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsSystemMaterialBackground;
- (id)widgetContainerView;
- (id)widgetContextMenuController;
- (id)widgetViewController;

@end
