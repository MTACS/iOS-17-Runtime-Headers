
@interface HKNumericAxisConfiguration : HKAxisConfiguration {
    double  _bottomVerticalLabelPadding;
    <HKAxisLabelDimension> * _labelDimension;
    double  _topVerticalLabelPadding;
}

@property (nonatomic) double bottomVerticalLabelPadding;
@property (nonatomic, retain) <HKAxisLabelDimension> *labelDimension;
@property (nonatomic) double topVerticalLabelPadding;

- (void).cxx_destruct;
- (void)applyOverridesFromNumericAxisConfiguration:(id)arg1;
- (double)bottomVerticalLabelPadding;
- (id)init;
- (id)labelDimension;
- (void)setBottomVerticalLabelPadding:(double)arg1;
- (void)setLabelDimension:(id)arg1;
- (void)setTopVerticalLabelPadding:(double)arg1;
- (double)topVerticalLabelPadding;

@end
