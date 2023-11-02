
@interface VSAccountMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore * _monitoredAccountStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACMonitoredAccountStore *monitoredAccountStore;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendNotification;
- (void)accountCredentialChanged:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (id)init;
- (id)monitoredAccountStore;
- (void)setMonitoredAccountStore:(id)arg1;

@end
