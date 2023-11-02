
@interface AMSUIPopoverShapeLayerView : UIView {
    unsigned long long  _arrowDirection;
    bool  _arrowDirectionWasFlipped;
    double  _arrowOffset;
    bool  _arrowOffsetWasFlipped;
    bool  _arrowVisible;
    bool  _popoverBackgroundColorIsOpaque;
    AMSUIPopoverShapeLayerMaskView * _shapeLayerMaskView;
    bool  _shapeLayerPathNeedsUpdate;
    UIView * _viewToMaskWhenContentExtendsOverArrow;
}

@property unsigned long long arrowDirection;
@property bool arrowDirectionWasFlipped;
@property (readonly) double arrowHeight;
@property double arrowOffset;
@property bool arrowOffsetWasFlipped;
@property bool arrowVisible;
@property bool popoverBackgroundColorIsOpaque;
@property (retain) AMSUIPopoverShapeLayerMaskView *shapeLayerMaskView;
@property bool shapeLayerPathNeedsUpdate;
@property (nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow;

+ (double)arrowBase;
+ (double)cornerRadius;

- (void).cxx_destruct;
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4;
- (void)_addLeftRightArrowCurveForPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 isPinned:(bool)arg6;
- (void)_addLeftRightRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_addRoundedRectExcludingTopLeftCornerForPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_addTopBottomArrowCurveForPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 isPinned:(bool)arg6;
- (void)_addTopBottomRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_loadNecessaryViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (double)_shadowRadius;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePathAnimationState;
- (void)_updateShapeLayerPath;
- (void)_updateShapeLayerPathIfNeeded;
- (unsigned long long)arrowDirection;
- (bool)arrowDirectionWasFlipped;
- (double)arrowHeight;
- (double)arrowOffset;
- (bool)arrowOffsetWasFlipped;
- (bool)arrowVisible;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (bool)popoverBackgroundColorIsOpaque;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowDirectionWasFlipped:(bool)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowOffsetWasFlipped:(bool)arg1;
- (void)setArrowVisible:(bool)arg1;
- (void)setNeedsLayout;
- (void)setPopoverBackgroundColorIsOpaque:(bool)arg1;
- (void)setShapeLayerMaskView:(id)arg1;
- (void)setShapeLayerPathNeedsUpdate:(bool)arg1;
- (void)setViewToMaskWhenContentExtendsOverArrow:(id)arg1;
- (id)shapeLayerMaskView;
- (bool)shapeLayerPathNeedsUpdate;
- (id)viewToMaskWhenContentExtendsOverArrow;
- (bool)wouldPinForOffset:(double)arg1;

@end
