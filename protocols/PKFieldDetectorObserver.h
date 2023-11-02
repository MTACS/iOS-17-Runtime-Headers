
@protocol PKFieldDetectorObserver <NSObject>

@optional

- (void)fieldDetectorDidEnterField:(PKFieldDetector *)arg1 withProperties:(PKFieldProperties *)arg2;
- (void)fieldDetectorDidExitField:(PKFieldDetector *)arg1;

@end
