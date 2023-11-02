
@interface PBFWidgetIconViewController : UIViewController <SBIconViewCustomImageViewControlling> {
    double  _continuousCornerRadius;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    UIImageView * _iconImageView;
    bool  _showsSquareCorners;
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
}

@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; } approximateLayoutPosition;
@property (nonatomic) bool automaticallyUpdatesVisiblySettled;
@property (nonatomic, copy) id /* block */ backgroundViewConfigurator;
@property (nonatomic, copy) id /* block */ backgroundViewProvider;
@property (nonatomic) double brightness;
@property (nonatomic, readonly) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDropping, nonatomic) bool dropping;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) bool forcesEdgeAntialiasing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIcon *icon;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, retain) UIImageView *iconImageView;
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
- (double)continuousCornerRadius;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)iconImageView;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setIconImageView:(id)arg1;
- (void)setShowsSquareCorners:(bool)arg1;
- (bool)showsSquareCorners;
- (id)sourceView;
- (void)viewDidLayoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (bool)wantsLabelHidden;

@end
