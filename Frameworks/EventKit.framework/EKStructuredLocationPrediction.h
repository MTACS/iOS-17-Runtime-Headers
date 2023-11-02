
@interface EKStructuredLocationPrediction : NSObject

+ (id)_mockLocationForEvent:(id)arg1;
+ (id)locationPredictionForEvent:(id)arg1 error:(id*)arg2 timeout:(double)arg3;
+ (bool)shouldDoLocationPredictionForEvent:(id)arg1;
+ (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2;

@end
