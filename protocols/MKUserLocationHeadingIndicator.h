
@protocol MKUserLocationHeadingIndicator <NSObject>

@required

- (unsigned long long)mapType;
- (double)minimumAccuracyRadius;
- (void)setAccuracyRadius:(double)arg1 duration:(double)arg2;
- (void)setMapType:(unsigned long long)arg1;
- (void)setMinimumAccuracyRadius:(double)arg1;
- (void)setTraitCollection:(UITraitCollection *)arg1;
- (UITraitCollection *)traitCollection;
- (void)updateHeading:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateTintColor:(UIColor *)arg1;

@end
