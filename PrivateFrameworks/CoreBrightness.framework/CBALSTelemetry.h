
@interface CBALSTelemetry : CBModule <CBContainerModuleProtocol> {
    bool  _alsLiveOnTelemetryEnabled;
    struct __IOHIDServiceClient { } * _alsService;
    NSUserDefaults * _defaults;
    unsigned long long  _lastTimestampInMicroseconds;
    double  _timeFactor;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyALSSampleHistoryWithLength:(int)arg1 frequency:(float)arg2 lastTimestamp:(unsigned long long*)arg3;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)dealloc;
- (unsigned long long)getBootTimeInMicroSeconds;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (void)handleSystemDidWakeFromSleepPropertyHandler:(id)arg1;
- (void)handleSystemPrepareForSleepPropertyHandler:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (bool)setALSService:(struct __IOHIDServiceClient { }*)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)start;
- (void)stop;
- (void)timerFired;
- (void)updateLastTimestampInDefaults;

@end
