
@interface CBGrimaldiModule : CBModule <CBContainerModuleProtocol> {
    void * APDSGlobalCorrectionSymbolAddr;
    double  _correctionFactor;
    int  _currentNumSamples;
    NSMutableDictionary * _currentRLuxOutputDict;
    NSNumber * _lastLux;
    NSDictionary * _lastRLuxOutputDict;
    NSMutableDictionary * _overriddenInput;
    bool  _overriding;
    struct APDSLuxInfo { 
        float *luxSamples; 
        float *gains; 
        unsigned long long *absoluteTime; 
        char *coexFlags; 
        int error; 
        unsigned char numSamples; 
    }  _rLuxInfo;
    NSObject<OS_dispatch_queue> * _rLuxTimerQueue;
    bool  _sampleMultiple;
    bool  _sampleOnce;
    bool  _started;
    NSObject<OS_dispatch_source> * _timer;
    NSSet * _validKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)CBAPDSGetLux;
- (void)clearOutput;
- (id)copyParam:(id)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (id)copyReliableLux;
- (void)dealloc;
- (int)getNextNumberOfSamplesFromNewLux:(float)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (bool)loadAPDS;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (void)setGrimaldiLux;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)start;
- (void)startSingleSample;
- (void)startWithFrequency:(float)arg1;
- (void)startWithFrequency:(float)arg1 singleSample:(bool)arg2;
- (void)stop;
- (void)unregisterNotificationBlock;

@end
