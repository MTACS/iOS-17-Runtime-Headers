
@interface HRAWaveformProcessor : NSObject {
    <HRAWaveformProcessorLoggingDelegate> * _logDelegate;
    NSUUID * _sessionUUID;
}

@property <HRAWaveformProcessorLoggingDelegate> *logDelegate;
@property (nonatomic, retain) NSUUID *sessionUUID;

- (void).cxx_destruct;
- (id)initWithMinimumUsableDuration:(double)arg1 minimumContinuousUsableDuration:(double)arg2 minimumSaveableDuration:(double)arg3;
- (id)logDelegate;
- (id)processSamples:(const float*)arg1 flags:(const char *)arg2 count:(unsigned long long)arg3 samplingRate:(float)arg4 startDate:(id)arg5;
- (id)processWaveform:(id)arg1;
- (id)sessionUUID;
- (void)setLogDelegate:(id)arg1;
- (void)setSessionUUID:(id)arg1;

@end
