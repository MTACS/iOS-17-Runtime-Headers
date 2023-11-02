
@interface TVRUIPageButton : TVRUIButton {
    CALayer * _contentLayer;
    CAShapeLayer * _leftWing;
    CAShapeLayer * _rightWing;
    UIBezierPath * _wingPath;
}

@property (nonatomic, retain) CALayer *contentLayer;
@property (nonatomic, retain) CAShapeLayer *leftWing;
@property (nonatomic, retain) CAShapeLayer *rightWing;
@property (nonatomic, retain) UIBezierPath *wingPath;

- (void).cxx_destruct;
- (struct CGPath { }*)_newScaledPathForPath:(struct CGPath { }*)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_setupSublayers;
- (void)_updateLayers;
- (id)contentLayer;
- (id)initWithType:(long long)arg1 hasTapAction:(bool)arg2;
- (void)layoutSubviews;
- (id)leftWing;
- (id)newChevronWingLayer;
- (id)rightWing;
- (void)setContentLayer:(id)arg1;
- (void)setLeftWing:(id)arg1;
- (void)setRightWing:(id)arg1;
- (void)setWingPath:(id)arg1;
- (id)wingPath;

@end
