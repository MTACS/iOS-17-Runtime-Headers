
@interface PowerUIWalletSignalMonitor : NSObject <PowerUISignalMonitor> {
    <PowerUISignalMonitorDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _waitForFinalChangeTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PowerUISignalMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *waitForFinalChangeTimer;

+ (id)monitorWithDelegate:(id)arg1;
+ (id)wallet;

- (void).cxx_destruct;
- (id)delegate;
- (id)detectedSignals;
- (id)initWithDelegate:(id)arg1;
- (id)log;
- (id)queue;
- (id)requiredFullChargeDate;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setWaitForFinalChangeTimer:(id)arg1;
- (unsigned long long)signalID;
- (void)sourceInformationChangedNotification:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)waitForFinalChangeTimer;

@end
