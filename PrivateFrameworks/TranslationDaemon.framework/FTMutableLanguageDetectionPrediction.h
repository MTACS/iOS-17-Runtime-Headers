
@interface FTMutableLanguageDetectionPrediction : FTLanguageDetectionPrediction

@property (nonatomic) float confidence;
@property (nonatomic) bool is_low_confidence;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic) float threshold;

- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)is_low_confidence;
- (id)locale;
- (void)setConfidence:(float)arg1;
- (void)setIs_low_confidence:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setThreshold:(float)arg1;
- (float)threshold;

@end
