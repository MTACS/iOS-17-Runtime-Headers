
@protocol SBFLiquidDetectionBlockProvider <NSObject>

@required

- (void)addLiquidDetectionObserver:(id <SBFLiquidDetectionObserver>)arg1;
- (bool)isLiquidDetectionBlocked;
- (void)removeLiquidDetectionObserver:(id <SBFLiquidDetectionObserver>)arg1;

@end
