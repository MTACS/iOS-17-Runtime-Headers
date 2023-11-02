
@interface JDErrorSimulation : NSObject

- (double*)constErrorForSpot:(int)arg1 echo:(int)arg2 inBank:(int)arg3;
- (id)initWithConstErrorMean:(double)arg1 constErrorStd:(double)arg2 framePercentageErrorStd:(double)arg3;
- (void)injectErrorsToPointCloud:(id)arg1;

@end
