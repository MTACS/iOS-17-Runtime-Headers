
@interface AXUISettingsTickMarkSlider : PSSegmentableSlider {
    UIColor * _postTickColor;
    double  _tickHeight;
    NSArray * _ticks;
    UIColor * _trackFillColor;
}

@property (nonatomic, retain) UIColor *postTickColor;
@property (nonatomic) double tickHeight;
@property (nonatomic, retain) NSArray *ticks;
@property (nonatomic, retain) UIColor *trackFillColor;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)postTickColor;
- (void)setPostTickColor:(id)arg1;
- (void)setTickHeight:(double)arg1;
- (void)setTicks:(id)arg1;
- (void)setTrackFillColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (double)tickHeight;
- (id)ticks;
- (id)trackFillColor;

@end
