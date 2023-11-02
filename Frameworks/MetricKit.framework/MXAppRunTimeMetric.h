
@interface MXAppRunTimeMetric : MXMetric {
    NSMeasurement * _cumulativeBackgroundAudioTime;
    NSMeasurement * _cumulativeBackgroundLocationTime;
    NSMeasurement * _cumulativeBackgroundTime;
    NSMeasurement * _cumulativeForegroundTime;
}

@property (readonly) NSMeasurement *cumulativeBackgroundAudioTime;
@property (readonly) NSMeasurement *cumulativeBackgroundLocationTime;
@property (readonly) NSMeasurement *cumulativeBackgroundTime;
@property (readonly) NSMeasurement *cumulativeForegroundTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cumulativeBackgroundAudioTime;
- (id)cumulativeBackgroundLocationTime;
- (id)cumulativeBackgroundTime;
- (id)cumulativeForegroundTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeForegroundTimeMeasurement:(id)arg1 cumulativeBackgroundTimeMeasurement:(id)arg2 cumulativeBackgroundAudioTimeMeasurement:(id)arg3 cumulativeBackgroundLocationTimeMeasurement:(id)arg4;
- (id)toDictionary;

@end
