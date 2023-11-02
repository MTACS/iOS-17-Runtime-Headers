
@protocol TVLRGBColorDetectorDelegate <NSObject>

@required

- (void)colorDetector:(TVLRGBColorDetector *)arg1 backlightStateChanged:(bool)arg2;
- (void)colorDetector:(TVLRGBColorDetector *)arg1 metThresholdConditionsWithColor:(UIColor *)arg2;
- (void)colorDetector:(TVLRGBColorDetector *)arg1 movementDetected:(double)arg2;

@end
