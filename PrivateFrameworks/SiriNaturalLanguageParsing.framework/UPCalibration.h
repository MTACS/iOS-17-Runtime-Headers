
@interface UPCalibration : NSObject

+ (id)calibrateCandidate:(id)arg1 withCalibrationScore:(double)arg2;
+ (id)calibrateResult:(id)arg1 withCalibrationScore:(double)arg2;

- (id)calibrateParserResults:(id)arg1 withCalibrationScores:(id)arg2 error:(id*)arg3;

@end
