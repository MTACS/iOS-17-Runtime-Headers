
@interface BKUIJindoPositioningGuideView : BKUIPearlPositioningGuideView {
    double  _lineYpositionDifference;
    double  _startLineYposition;
    double  _targetLineYposition;
}

@property (nonatomic) double lineYpositionDifference;
@property (nonatomic) double startLineYposition;
@property (nonatomic) double targetLineYposition;

- (double)_edgeDistanceHeightDifference;
- (id)_roundedRectMaskForMaskDistance:(double)arg1 portalCenter:(struct CGPoint { double x1; double x2; })arg2 cornerRadius:(double)arg3;
- (double)_squareLayoutOpenValue;
- (void)_startAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_updateChildrenValuesForDisplayTickProgress:(double)arg1;
- (void)_updateTargetValuesForAnimation:(long long)arg1 animationCurve:(long long)arg2;
- (void)breathe;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lineYpositionDifference;
- (bool)needsMaskedNeedsPositionStyleEnrollment;
- (void)resetValuesToStart;
- (void)setLineYpositionDifference:(double)arg1;
- (void)setStartLineYposition:(double)arg1;
- (void)setTargetLineYposition:(double)arg1;
- (double)startLineYposition;
- (double)targetLineYposition;

@end
