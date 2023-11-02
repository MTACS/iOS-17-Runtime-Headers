
@interface AXFKAFocusRingBorderShapeLayer : CAShapeLayer {
    unsigned long long  _ringPosition;
    double  _unscaledLineWidth;
}

@property (nonatomic) unsigned long long ringPosition;
@property (nonatomic) double unscaledLineWidth;

- (unsigned long long)ringPosition;
- (void)setRingPosition:(unsigned long long)arg1;
- (void)setUnscaledLineWidth:(double)arg1;
- (double)unscaledLineWidth;

@end
