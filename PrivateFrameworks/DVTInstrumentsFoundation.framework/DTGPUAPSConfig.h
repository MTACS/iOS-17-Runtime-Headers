
@interface DTGPUAPSConfig : NSObject {
    unsigned long long  _cliqueTraceLevel;
    unsigned long long  _countPeriod;
    unsigned long long  _duration;
    unsigned long long  _emitPos;
    unsigned long long  _emitThreadControlFlow;
    unsigned long long  _eslInstTracing;
    unsigned long long  _nRingBuffers;
    unsigned long long  _pulsePeriod;
    unsigned long long  _ringBufferSizeInKB;
    unsigned long long  _subSamplingMinTraced;
    unsigned long long  _subSamplingTargetThreshold;
    unsigned long long  _systemTimePeriod;
    unsigned long long  _tileTracing;
}

@property (nonatomic) unsigned long long cliqueTraceLevel;
@property (nonatomic) unsigned long long countPeriod;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long emitPos;
@property (nonatomic) unsigned long long emitThreadControlFlow;
@property (nonatomic) unsigned long long eslInstTracing;
@property (nonatomic, readonly) NSDictionary *grcOptions;
@property (nonatomic, readonly) NSDictionary *grcTrigger;
@property (nonatomic) unsigned long long nRingBuffers;
@property (nonatomic) unsigned long long pulsePeriod;
@property (nonatomic) unsigned long long ringBufferSizeInKB;
@property (nonatomic) unsigned long long subSamplingMinTraced;
@property (nonatomic) unsigned long long subSamplingTargetThreshold;
@property (nonatomic) unsigned long long systemTimePeriod;
@property (nonatomic) unsigned long long tileTracing;

- (unsigned long long)cliqueTraceLevel;
- (unsigned long long)countPeriod;
- (unsigned long long)duration;
- (unsigned long long)emitPos;
- (unsigned long long)emitThreadControlFlow;
- (unsigned long long)eslInstTracing;
- (id)grcOptions;
- (id)grcTrigger;
- (id)init;
- (unsigned long long)nRingBuffers;
- (unsigned long long)pulsePeriod;
- (void)readConfig:(id)arg1;
- (unsigned long long)ringBufferSizeInKB;
- (void)setCliqueTraceLevel:(unsigned long long)arg1;
- (void)setCountPeriod:(unsigned long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEmitPos:(unsigned long long)arg1;
- (void)setEmitThreadControlFlow:(unsigned long long)arg1;
- (void)setEslInstTracing:(unsigned long long)arg1;
- (void)setNRingBuffers:(unsigned long long)arg1;
- (void)setPulsePeriod:(unsigned long long)arg1;
- (void)setRingBufferSizeInKB:(unsigned long long)arg1;
- (void)setSubSamplingMinTraced:(unsigned long long)arg1;
- (void)setSubSamplingTargetThreshold:(unsigned long long)arg1;
- (void)setSystemTimePeriod:(unsigned long long)arg1;
- (void)setTileTracing:(unsigned long long)arg1;
- (unsigned long long)subSamplingMinTraced;
- (unsigned long long)subSamplingTargetThreshold;
- (unsigned long long)systemTimePeriod;
- (unsigned long long)tileTracing;
- (id)toDictionary;

@end
