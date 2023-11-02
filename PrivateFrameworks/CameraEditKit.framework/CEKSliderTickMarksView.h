
@interface CEKSliderTickMarksView : UIView <CEKTickMarksConfiguration> {
    <CEKSliderTickMarksDelegate> * _delegate;
    UIColor * _mainTickMarkColor;
    long long  _mainTickMarkInterval;
    long long  _mainTickMarkOffset;
    UIColor * _secondaryTickMarkColor;
    double  _tickMarkSpacing;
    double  _tickMarkWidth;
    bool  _useTickMarkLegibilityShadows;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CEKSliderTickMarksDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *mainTickMarkColor;
@property (nonatomic) long long mainTickMarkInterval;
@property (nonatomic) long long mainTickMarkOffset;
@property (nonatomic, retain) UIColor *secondaryTickMarkColor;
@property (readonly) Class superclass;
@property (nonatomic) double tickMarkSpacing;
@property (nonatomic) double tickMarkWidth;
@property (nonatomic, readonly) long long tickMarksCount;
@property (nonatomic) bool useTickMarkLegibilityShadows;

- (void).cxx_destruct;
- (id)_colorForMainTickMarks;
- (id)_colorForSecondaryTickMarks;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)defaultMainTickMarkDynamicColor;
- (id)defaultSecondaryTickMarkDynamicColor;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)floorTickMarkIndexForXOffset:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMainTickMarkIndex:(long long)arg1;
- (id)mainTickMarkColor;
- (long long)mainTickMarkInterval;
- (long long)mainTickMarkOffset;
- (id)secondaryTickMarkColor;
- (void)setDelegate:(id)arg1;
- (void)setMainTickMarkColor:(id)arg1;
- (void)setMainTickMarkInterval:(long long)arg1;
- (void)setMainTickMarkOffset:(long long)arg1;
- (void)setSecondaryTickMarkColor:(id)arg1;
- (void)setTickMarkSpacing:(double)arg1;
- (void)setTickMarkWidth:(double)arg1;
- (void)setUseTickMarkLegibilityShadows:(bool)arg1;
- (double)tickMarkSpacing;
- (double)tickMarkWidth;
- (long long)tickMarksCount;
- (bool)useTickMarkLegibilityShadows;
- (double)widthForTickMarkCount:(unsigned long long)arg1;
- (double)xOffsetForTickMarkIndex:(long long)arg1;

@end
