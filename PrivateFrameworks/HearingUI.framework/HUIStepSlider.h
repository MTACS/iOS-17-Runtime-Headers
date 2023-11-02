
@interface HUIStepSlider : UISlider {
    bool  _drawsEndTicks;
    bool  _restrictsValuesToTicks;
    unsigned long long  _segmentCount;
    bool  _supportsVibrancy;
    UIColor * _tickColor;
    NSMutableArray * _ticks;
}

@property (nonatomic) bool drawsEndTicks;
@property (nonatomic) bool restrictsValuesToTicks;
@property (nonatomic) unsigned long long segmentCount;
@property (nonatomic) bool supportsVibrancy;
@property (nonatomic, retain) UIColor *tickColor;
@property (nonatomic, retain) NSMutableArray *ticks;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (bool)drawsEndTicks;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (bool)restrictsValuesToTicks;
- (unsigned long long)segmentCount;
- (void)setDrawsEndTicks:(bool)arg1;
- (void)setRestrictsValuesToTicks:(bool)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;
- (void)setSupportsVibrancy:(bool)arg1;
- (void)setTickColor:(id)arg1;
- (void)setTicks:(id)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)sliderTapped:(id)arg1;
- (bool)supportsVibrancy;
- (id)tickColor;
- (id)ticks;

@end
