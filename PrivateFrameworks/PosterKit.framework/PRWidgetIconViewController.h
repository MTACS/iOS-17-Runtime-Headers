
@interface PRWidgetIconViewController : UIViewController <BSInvalidatable, SBIconViewCustomImageViewControlling> {
    bool  _backgroundHidden;
    UIView * _backgroundView;
    PRComplicationDescriptor * _complicationDescriptor;
    unsigned long long  _contentType;
    double  _continuousCornerRadius;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    MTVisualStylingProvider * _platterVisualStylingProvider;
    bool  _showsSquareCorners;
    bool  _useMaterialBackground;
    <UITraitChangeRegistration> * _userInterfaceStyleTraitChangeRegistration;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
    CHUISWidgetHostViewController * _widgetHostViewController;
    bool  _widgetInteractionDisabled;
}

@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; } approximateLayoutPosition;
@property (nonatomic) bool automaticallyUpdatesVisiblySettled;
@property (getter=isBackgroundHidden, nonatomic) bool backgroundHidden;
@property (nonatomic, copy) id /* block */ backgroundViewConfigurator;
@property (nonatomic, copy) id /* block */ backgroundViewProvider;
@property (nonatomic) double brightness;
@property (nonatomic, readonly) PRComplicationDescriptor *complicationDescriptor;
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
@property (nonatomic) bool useMaterialBackground;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (nonatomic, readonly) <SBLeafIconDataSource> *visiblyActiveDataSource;
@property (nonatomic, readonly) bool wantsCaptureOnlyBackgroundView;
@property (nonatomic) bool wantsEditingDisplayStyle;
@property (nonatomic, readonly) bool wantsLabelHidden;
@property (nonatomic, readonly) CHUISWidgetHostViewController *widgetHostViewController;
@property (getter=isWidgetInteractionDisabled, nonatomic) bool widgetInteractionDisabled;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_createBackgroundView;
- (id)_platterVisualStylingProvider;
- (void)_updateBackgroundView;
- (void)_updatePlatterStylingIfNeeded;
- (id)complicationDescriptor;
- (double)continuousCornerRadius;
- (void)dealloc;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)initWithComplicationDescriptor:(id)arg1;
- (id)initWithComplicationDescriptor:(id)arg1 contentType:(unsigned long long)arg2;
- (void)invalidate;
- (bool)isBackgroundHidden;
- (bool)isUserInteractionEnabled;
- (bool)isWidgetInteractionDisabled;
- (void)setBackgroundHidden:(bool)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setShowsSquareCorners:(bool)arg1;
- (void)setUseMaterialBackground:(bool)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (void)setWidgetInteractionDisabled:(bool)arg1;
- (bool)showsSquareCorners;
- (id)sourceView;
- (bool)useMaterialBackground;
- (id)vibrancyConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (bool)wantsLabelHidden;
- (id)widgetHostViewController;

@end
