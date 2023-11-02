
@interface HKAppleWalkingSteadinessAxis : HKNumericAxis {
    NSArray * _cachedAxisLabels;
    HKDisplayType * _displayType;
}

@property (nonatomic, retain) NSArray *cachedAxisLabels;
@property (nonatomic, retain) HKDisplayType *displayType;

+ (id)standardAxisWithDisplayType:(id)arg1;

- (void).cxx_destruct;
- (id)_axisLabelsForClassificationsWithDisplayType:(id)arg1;
- (id)cachedAxisLabels;
- (id)displayType;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)initWithDisplayType:(id)arg1;
- (struct CGPoint { double x1; double x2; })renderPositionForLabelLocation:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7;
- (void)setCachedAxisLabels:(id)arg1;
- (void)setDisplayType:(id)arg1;

@end
