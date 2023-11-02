
@interface PowerUIWakeRequestSignalMonitor : NSObject <PowerUISignalMonitor> {
    <_CDContext> * _context;
    <PowerUISignalMonitorDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
    _CDContextualChangeRegistration * _registration;
}

@property (nonatomic, retain) <_CDContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PowerUISignalMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) _CDContextualChangeRegistration *registration;
@property (readonly) Class superclass;

+ (id)monitorWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)log;
- (id)nextUserVisibleWakeDate;
- (id)registration;
- (id)requiredFullChargeDate;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setRegistration:(id)arg1;
- (unsigned long long)signalID;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
