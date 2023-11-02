
@interface SHListeningInnerCircleLayer : SHPaletteLayer {
    CAShapeLayer * _circle;
    CALayer * _circleContainerLayer;
}

@property (nonatomic, retain) CAShapeLayer *circle;
@property (nonatomic, retain) CALayer *circleContainerLayer;

- (void).cxx_destruct;
- (id)circle;
- (id)circleContainerLayer;
- (struct CGPath { }*)circlePathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayers;
- (void)setCircle:(id)arg1;
- (void)setCircleContainerLayer:(id)arg1;
- (void)setup;

@end
