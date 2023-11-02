
@interface DTGraphicsService : DTXService <DTGraphicsServiceAuthorizedAPI> {
    NSMutableArray * _availableGlobalStatistics;
    NSMutableArray * _availableProcessStatistics;
    NSDictionary * _availableStatistics;
    bool  _capFPS;
    bool  _doCollectData;
    NSMutableArray * _driverNames;
    unsigned int  _globalService;
    unsigned int  _lastFPSCount;
    double  _lastTimeStampInSeconds;
    unsigned int  _maxFPS;
    unsigned int  _perProcessService;
    unsigned long long  _samplingRate;
    double  _startTime;
    NSObject<OS_dispatch_semaphore> * _stopSamplingSemaphore;
    int  _targetPid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (void)_collectData;
- (id)_collectSampleForService;
- (void)_releaseIOServices;
- (void)_setupIOServices;
- (id)availableStatistics;
- (void)cleanup;
- (id)currentFramesPerSecond:(double)arg1;
- (void)dealloc;
- (id)driverNames;
- (id)initWithChannel:(id)arg1;
- (void)queryCards;
- (id)queryGlobalStatistics;
- (id)queryPidStatistics;
- (void)setSamplingRate:(id)arg1;
- (void)setValue:(id)arg1 forSwitchName:(id)arg2;
- (void)startSamplingAtTimeInterval:(id)arg1;
- (void)startSamplingAtTimeInterval:(id)arg1 processIdentifier:(id)arg2;
- (void)stopSampling;
- (id)valueForSwitch:(id)arg1;

@end
