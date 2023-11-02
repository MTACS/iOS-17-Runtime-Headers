
@interface PowerUIRemoteLocationMonitor : NSObject {
    <_CDContext> * _context;
    PowerUILocationSignalMonitor * _locationManager;
    NSObject<OS_os_log> * _log;
    PowerUISmartChargeManager * _manager;
    NSObject<OS_dispatch_queue> * _syncQueue;
    unsigned long long  _syncing;
    _CDContextualChangeRegistration * _wakingRegistration;
}

@property (nonatomic, retain) <_CDContext> *context;
@property (nonatomic, retain) PowerUILocationSignalMonitor *locationManager;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) PowerUISmartChargeManager *manager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long syncing;
@property (nonatomic, retain) _CDContextualChangeRegistration *wakingRegistration;

- (void).cxx_destruct;
- (id)context;
- (id)initWithManager:(id)arg1 withLocationManager:(id)arg2 withContext:(id)arg3 withDefaultsDomain:(id)arg4 withTrialManager:(id)arg5;
- (id)locationManager;
- (id)log;
- (id)manager;
- (void)setContext:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncing:(unsigned long long)arg1;
- (void)setWakingRegistration:(id)arg1;
- (id)syncQueue;
- (unsigned long long)syncing;
- (id)wakingRegistration;

@end
