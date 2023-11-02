
@interface HDDemoDataAudioExposureSampleGenerator : HDDemoDataBaseSampleGenerator {
    bool  _didGenerateEnvironmentalAudioExposureSamples;
    bool  _didGenerateHeadphoneAudioExposureSamples;
    NSDate * _lastEnvironmentalSampleEndDate;
    NSDate * _lastHeadphoneSampleEndDate;
    double  _nextEnvironmentalAudioExposureSampleTime;
    double  _nextHeadphoneAudioExposureSampleTime;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
