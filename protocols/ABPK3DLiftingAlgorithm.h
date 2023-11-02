
@protocol ABPK3DLiftingAlgorithm <NSObject>

@required

- (ABPK3DLiftingResult *)getLiftingResults;
- (int)runLiftingModelWithData:(ABPK2DDetectionResult *)arg1 atTimestamp:(double)arg2;

@end
