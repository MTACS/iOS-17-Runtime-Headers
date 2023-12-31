
@interface SBIconViewCustomImageViewController : UIViewController <SBIconViewCustomImageViewControlling> {
    UIView * _backgroundView;
    id /* block */  _backgroundViewConfigurator;
    id /* block */  _backgroundViewProvider;
    UIViewController * _contentViewController;
    bool  _forcesEdgeAntialiasing;
    SBIcon * _icon;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    bool  _showsSquareCorners;
    <BSInvalidatable> * _stateCaptureInvalidatable;
}

@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; } approximateLayoutPosition;
@property (nonatomic) bool automaticallyUpdatesVisiblySettled;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, copy) id /* block */ backgroundViewConfigurator;
@property (nonatomic, copy) id /* block */ backgroundViewProvider;
@property (nonatomic) double brightness;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, readonly) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDropping, nonatomic) bool dropping;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) bool forcesEdgeAntialiasing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIcon *icon;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumPreferredEdgeInsetsForContextMenu;
@property (getter=isOverlapping, nonatomic) bool overlapping;
@property (nonatomic) unsigned long long pauseReasons;
@property (nonatomic) unsigned long long presentationMode;
@property (getter=isShowingContextMenu, nonatomic) bool showingContextMenu;
@property (nonatomic) bool showsSnapshotWhenDeactivated;
@property (nonatomic) bool showsSquareCorners;
@property (nonatomic, readonly) UIView *snapshotView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } snapshotViewCenter;
@property (nonatomic, readonly) double snapshotViewScaleFactor;
@property (nonatomic, readonly) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (nonatomic, readonly) <SBLeafIconDataSource> *visiblyActiveDataSource;
@property (nonatomic, readonly) bool wantsCaptureOnlyBackgroundView;
@property (nonatomic) bool wantsEditingDisplayStyle;
@property (nonatomic, readonly) bool wantsLabelHidden;

- (void).cxx_destruct;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureBackgroundViewIfNecessary:(id)arg1;
- (id)_createBackgroundView;
- (void)_createBackgroundViewIfNecessary:(bool)arg1;
- (bool)_needsBackgroundView;
- (void)_setupStateCapture;
- (void)_teardownBackgroundView;
- (void)_teardownBackgroundView:(id)arg1;
- (void)_teardownStateCapture;
- (void)_updateEdgeAntialiasing;
- (id)backgroundView;
- (id /* block */)backgroundViewConfigurator;
- (id /* block */)backgroundViewProvider;
- (id)contentView;
- (id)contentViewController;
- (double)continuousCornerRadius;
- (void)dealloc;
- (void)evaluateBackground;
- (bool)forcesEdgeAntialiasing;
- (id)icon;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)initWithContentViewController:(id)arg1;
- (bool)sbh_isCustomIconImageViewController;
- (id)sbh_underlyingAvocadoHostViewControllers;
- (void)setBackgroundView:(id)arg1;
- (void)setBackgroundViewConfigurator:(id /* block */)arg1;
- (void)setBackgroundViewProvider:(id /* block */)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setForcesEdgeAntialiasing:(bool)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setShowsSquareCorners:(bool)arg1;
- (bool)showsSquareCorners;
- (id)snapshotView;
- (double)snapshotViewScaleFactor;
- (id)sourceView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end
