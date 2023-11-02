
@interface FTMutableLatnnMitigatorResult : FTLatnnMitigatorResult

@property (nonatomic) float calibration_offset;
@property (nonatomic) float calibration_scale;
@property (nonatomic) bool processed;
@property (nonatomic) double score;
@property (nonatomic) double threshold;
@property (nonatomic, copy) NSString *version;

- (float)calibration_offset;
- (float)calibration_scale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)processed;
- (double)score;
- (void)setCalibration_offset:(float)arg1;
- (void)setCalibration_scale:(float)arg1;
- (void)setProcessed:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setThreshold:(double)arg1;
- (void)setVersion:(id)arg1;
- (double)threshold;
- (id)version;

@end
