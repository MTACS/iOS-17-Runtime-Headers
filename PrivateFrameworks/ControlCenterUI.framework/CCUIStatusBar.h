
@interface CCUIStatusBar : UIView {
    bool  _alignCompactAndExpandedStatusBars;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _compactEdgeInsets;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _compactScaleTransform;
    UIStatusBar * _compactTrailingStatusBar;
    <CCUIStatusBarDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expandedEdgeInsets;
    UIStatusBar * _expandedStatusBar;
    double  _expandedStatusBarTranslation;
    unsigned long long  _leadingState;
    double  _maxCompactScaleFactor;
    bool  _needsUpdatedMetrics;
    double  _trailingMarginDelta;
    unsigned long long  _trailingState;
    double  _verticalBatteryAlignmentDelta;
    double  _verticalSecondaryServiceDelta;
}

@property (nonatomic) bool alignCompactAndExpandedStatusBars;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } compactEdgeInsets;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } compactScaleTransform;
@property (nonatomic) double compactTrailingAlpha;
@property (nonatomic, readonly, copy) UIStatusBarStyleRequest *compactTrailingStyleRequest;
@property (nonatomic) <CCUIStatusBarDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expandedEdgeInsets;
@property (nonatomic) double expandedStatusBarTranslation;
@property (nonatomic) double expandedTrailingAlpha;
@property (nonatomic) double leadingAlpha;
@property (nonatomic) unsigned long long leadingState;
@property (nonatomic, readonly) double maxCompactScaleFactor;
@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long trailingState;
@property (nonatomic, readonly) double verticalSecondaryServiceDelta;

+ (Class)statusBarClass;

- (void).cxx_destruct;
- (void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
- (void)_updateMetricsIfNeeded;
- (void)_updateShadow;
- (bool)alignCompactAndExpandedStatusBars;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compactAvoidanceFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })compactEdgeInsets;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })compactScaleTransform;
- (double)compactTrailingAlpha;
- (id)compactTrailingStyleRequest;
- (void)controlCenterApplyPrimaryContentShadow;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (double)expandedStatusBarTranslation;
- (double)expandedTrailingAlpha;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)leadingAlpha;
- (unsigned long long)leadingState;
- (double)maxCompactScaleFactor;
- (long long)orientation;
- (void)prepareForPresentation;
- (void)setAlignCompactAndExpandedStatusBars:(bool)arg1;
- (void)setCompactEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCompactScaleTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setCompactTrailingAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExpandedStatusBarTranslation:(double)arg1;
- (void)setExpandedTrailingAlpha:(double)arg1;
- (void)setLeadingAlpha:(double)arg1;
- (void)setLeadingState:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setTrailingState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)trailingState;
- (double)verticalSecondaryServiceDelta;

@end
