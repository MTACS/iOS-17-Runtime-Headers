
@interface HKSHBatteryRing : NSObject {
    double  _backgroundRingAlpha;
    double  _fillFraction;
    double  _radius;
    double  _strokeWidth;
}

@property double backgroundRingAlpha;
@property double fillFraction;
@property double radius;
@property double strokeWidth;

- (double)_validFillFraction:(double)arg1;
- (double)backgroundRingAlpha;
- (id)fillColor;
- (double)fillFraction;
- (long long)fillFractionPercent;
- (id)fillFractionString;
- (id)init;
- (id)initWithFillFraction:(double)arg1 radius:(double)arg2 strokeWidth:(double)arg3;
- (double)radius;
- (id)ringImage;
- (void)setBackgroundRingAlpha:(double)arg1;
- (void)setFillFraction:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setStrokeWidth:(double)arg1;
- (double)strokeWidth;

@end
