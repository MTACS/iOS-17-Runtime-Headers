
@interface _UIMotionEffectEngineLogger : NSObject {
    double  _lastUpdateTimeStamp;
    long long  _motionLevelSamples;
    long long  _sampleCount;
    long long  _updateFreqency;
}

- (void)_dumpToAggregated;
- (id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2;
- (void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2;

@end
