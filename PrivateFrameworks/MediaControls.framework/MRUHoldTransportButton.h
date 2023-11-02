
@interface MRUHoldTransportButton : MRUTransportButton {
    NSTimer * _animationTimer;
}

@property (nonatomic, retain) NSTimer *animationTimer;

- (void).cxx_destruct;
- (id)animationTimer;
- (void)beganHold:(id)arg1;
- (void)didSelect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)releasedHold:(id)arg1;
- (void)setAnimationTimer:(id)arg1;
- (void)setTransportControlItem:(id)arg1;

@end
