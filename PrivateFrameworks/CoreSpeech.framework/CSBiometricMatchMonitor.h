
@interface CSBiometricMatchMonitor : CSEventMonitor <BKDeviceDelegate> {
    BKDevice * _biometricDevice;
    <CSBiometricMatchMonitorDelegate> * _delegate;
}

@property (nonatomic, retain) BKDevice *biometricDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSBiometricMatchMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)biometricDevice;
- (id)delegate;
- (void)device:(id)arg1 matchEventOccurred:(id)arg2;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;
- (bool)getLastBiometricMatchEvent:(bool*)arg1 atTime:(unsigned long long*)arg2;
- (id)init;
- (void)setBiometricDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startObserving;

@end
