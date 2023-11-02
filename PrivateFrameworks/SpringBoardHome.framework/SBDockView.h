
@interface SBDockView : UIView <SBUICoronaAnimationControllerParticipant> {
    UIView * _accessibilityBackgroundView;
    UIImageView * _backgroundImageView;
    UIView * _backgroundView;
    <SBDockViewDelegate> * _delegate;
    unsigned long long  _dockEdge;
    double  _dockListOffset;
    bool  _forSnapshot;
    SBHighlightView * _highlightView;
    SBDockIconListView * _iconListView;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, readonly) UIColor *accessibilityBackgroundColor;
@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDockViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dockEdge;
@property (nonatomic, readonly) double dockHeight;
@property (nonatomic, readonly) double dockHeightPadding;
@property (getter=isDockInset, nonatomic, readonly) bool dockInset;
@property (nonatomic) double dockListOffset;
@property (nonatomic, readonly) SBDockIconListView *dockListView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dockListViewFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backgroundContrastDidChange:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_dockOverhangInsets;
- (double)_layoutScale;
- (id)_listLayout;
- (double)_minimumHomeScreenScale;
- (void)_updateCornerRadii;
- (id)_visualConfiguration;
- (id)accessibilityBackgroundColor;
- (id)backgroundView;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (unsigned long long)dockEdge;
- (double)dockHeight;
- (double)dockHeightPadding;
- (double)dockListOffset;
- (id)dockListView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dockListViewFrame;
- (void)getDockViewMetrics:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg1;
- (id)initWithDockListView:(id)arg1 forSnapshot:(bool)arg2;
- (bool)isDockInset;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)minimumHomeScreenScaleDidChange;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockEdge:(unsigned long long)arg1;
- (void)setDockListOffset:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)updateAccessibilityTintColor;
- (void)willMoveToWindow:(id)arg1;

@end
