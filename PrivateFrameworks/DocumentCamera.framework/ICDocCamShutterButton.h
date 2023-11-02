
@interface ICDocCamShutterButton : UIButton {
    bool  _pseudoDisabled;
}

@property (getter=isPseudoDisabled, nonatomic) bool pseudoDisabled;

- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerCircle;
- (bool)isPseudoDisabled;
- (id)outerRingImage;
- (void)setPseudoDisabled:(bool)arg1;

@end
