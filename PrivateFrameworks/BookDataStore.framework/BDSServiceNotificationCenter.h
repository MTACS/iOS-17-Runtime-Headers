
@interface BDSServiceNotificationCenter : NSObject <BDSServiceProxyConnectionDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changeTokenLock;
    NSNumber * _changeTokenObject;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BDSServiceProxy * _serviceProxy;
    bool  _shouldMonitor;
}

@property (nonatomic, retain) NSNumber *changeTokenObject;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;
@property bool shouldMonitor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_postServiceNotificationNames:(id)arg1 andUpdateChangeToken:(id)arg2;
- (void)_startMonitoring;
- (void)_startMonitoringServiceNotifications;
- (void)_updateChangeToken:(id)arg1;
- (id)changeTokenObject;
- (void)handleServiceNotificationNames:(id)arg1 latestChangeToken:(long long)arg2;
- (id)init;
- (void)q_startMonitoringServiceNotifications;
- (void)serviceConnectionDidResume;
- (void)serviceDidRestart;
- (id)serviceProxy;
- (void)setChangeTokenObject:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)setShouldMonitor:(bool)arg1;
- (bool)shouldMonitor;
- (void)startMonitoring;

@end
