
@interface AMUIRingLayer : CAShapeLayer

+ (struct CGPath { }*)newPathForDiameter:(double)arg1 lineWidth:(double)arg2;
+ (id)ringLayerWithBlendMode:(id)arg1 diameter:(double)arg2 lineWidth:(double)arg3 brightnessAmount:(double)arg4 saturationAmount:(double)arg5;
+ (id)ringWithDiameter:(double)arg1 lineWidth:(double)arg2;

- (void)setFillFraction:(double)arg1;

@end
