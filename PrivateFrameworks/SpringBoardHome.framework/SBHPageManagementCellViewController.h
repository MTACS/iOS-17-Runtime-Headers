
@interface SBHPageManagementCellViewController : UIViewController <SBIconViewCustomImageViewControlling, UIGestureRecognizerDelegate> {
    id /* block */  _backgroundViewProvider;
    <SBHPageManagementCellViewControllerDelegate> * _delegate;
    bool  _editing;
    SBFolder * _folder;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    MTMaterialView * _listBackgroundView;
    SBIconListView * _listView;
    struct SBHPageManagementCellMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } fullListViewSize; 
        struct CGSize { 
            double width; 
            double height; 
        } scaledListViewSize; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } foregroundInsets; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } backgroundInsets; 
        double listViewVerticalPositionAdjustment; 
        double toggleButtonDiameter; 
        double toggleButtonVerticalMargin; 
    }  _metrics;
    bool  _showsSquareCorners;
    UIGestureRecognizer * _tapGestureRecognizer;
    bool  _toggleButtonAllowed;
    MTMaterialView * _toggleButtonBackgroundView;
}

@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; } approximateLayoutPosition;
@property (nonatomic) bool automaticallyUpdatesVisiblySettled;
@property (nonatomic, copy) id /* block */ backgroundViewConfigurator;
@property (nonatomic, copy) id /* block */ backgroundViewProvider;
@property (nonatomic) double brightness;
@property (nonatomic, readonly) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHPageManagementCellViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDropping, nonatomic) bool dropping;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, readonly) SBFolder *folder;
@property (nonatomic) bool forcesEdgeAntialiasing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIcon *icon;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) MTMaterialView *listBackgroundView;
@property (nonatomic, readonly) SBIconListView *listView;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumPreferredEdgeInsetsForContextMenu;
@property (getter=isOverlapping, nonatomic) bool overlapping;
@property (nonatomic, readonly) SBHPageManagementCellView *pageManagementCellView;
@property (nonatomic) unsigned long long pauseReasons;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) bool scalesListView;
@property (getter=isShowingContextMenu, nonatomic) bool showingContextMenu;
@property (nonatomic) bool showsSnapshotWhenDeactivated;
@property (nonatomic) bool showsSquareCorners;
@property (nonatomic, readonly) UIView *snapshotView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } snapshotViewCenter;
@property (nonatomic, readonly) double snapshotViewScaleFactor;
@property (nonatomic, readonly) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) double toggleButtonAlpha;
@property (nonatomic, readonly) MTMaterialView *toggleButtonBackgroundView;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (nonatomic, readonly) <SBLeafIconDataSource> *visiblyActiveDataSource;
@property (nonatomic, readonly) bool wantsCaptureOnlyBackgroundView;
@property (nonatomic) bool wantsEditingDisplayStyle;
@property (nonatomic, readonly) bool wantsLabelHidden;

- (void).cxx_destruct;
- (id /* block */)backgroundViewProvider;
- (void)cancelGestures;
- (void)cleanUpListView;
- (double)continuousCornerRadius;
- (id)delegate;
- (id)folder;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)initWithListView:(id)arg1 listBackgroundView:(id)arg2 toggleButtonBackgroundView:(id)arg3 folder:(id)arg4 metrics:(struct SBHPageManagementCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; double x5; double x6; double x7; })arg5 toggleButtonAllowed:(bool)arg6;
- (bool)isEditing;
- (bool)isUserInteractionEnabled;
- (id)listBackgroundView;
- (id)listHighlightView;
- (id)listView;
- (void)listViewTapped:(id)arg1;
- (void)loadView;
- (id)pageManagementCellView;
- (bool)scalesListView;
- (void)setBackgroundViewProvider:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setListHighlighted:(bool)arg1;
- (void)setScalesListView:(bool)arg1;
- (void)setShowsSquareCorners:(bool)arg1;
- (void)setToggleButtonAlpha:(double)arg1;
- (bool)showsSquareCorners;
- (id)snapshotView;
- (struct CGPoint { double x1; double x2; })snapshotViewCenter;
- (id)sourceView;
- (id)tapGestureRecognizer;
- (double)toggleButtonAlpha;
- (id)toggleButtonBackgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (bool)wantsCaptureOnlyBackgroundView;

@end
