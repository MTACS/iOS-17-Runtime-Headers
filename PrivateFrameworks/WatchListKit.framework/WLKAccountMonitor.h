
@interface WLKAccountMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACAccount * _activeAccount;
    ACMonitoredAccountStore * _monitoredAccountStore;
}

@property (nonatomic, readonly) ACAccount *activeAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACMonitoredAccountStore *monitoredAccountStore;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (bool)_shouldNotifyAccountChange:(id)arg1 newAccount:(id)arg2;
- (bool)_shouldNotifyStoreFrontChange:(id)arg1 newAccount:(id)arg2;
- (id)activeAccount;
- (void)dealloc;
- (id)init;
- (id)monitoredAccountStore;
- (void)setMonitoredAccountStore:(id)arg1;

@end
