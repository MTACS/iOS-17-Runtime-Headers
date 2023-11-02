
@protocol PEValuesCalculatorDelegate <NSObject>

@required

- (void)editValuesCalculatorHasChangedFlashStatus:(PEValuesCalculator *)arg1;
- (void)editValuesCalculatorHasChangedGeometricValues:(PEValuesCalculator *)arg1;
- (void)editValuesCalculatorHasChangedImageValues:(PEValuesCalculator *)arg1;

@optional

- (void)editValuesCalculatorDidFinishComputingGeometricValues:(PEValuesCalculator *)arg1;

@end
