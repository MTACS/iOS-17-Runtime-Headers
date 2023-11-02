
@interface PSAccountEnumerator : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    NSObject<OS_dispatch_queue> * __accountUpdateQueue;
    ACMonitoredAccountStore * __monitoredAccountStore;
    long long  _visibleAccountCount;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_accountUpdateQueue;
@property (nonatomic, retain) ACMonitoredAccountStore *_monitoredAccountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACMonitoredAccountStore *monitoredAccountStore;
@property (readonly) Class superclass;
@property (nonatomic) long long visibleAccountCount;

+ (id)_visibleAccountTypeIDs;
+ (id)sharedEnumerator;

- (void).cxx_destruct;
- (id)_accountUpdateQueue;
- (void)_handleAccountStoreDidUpdateIsInitialLoad:(bool)arg1 completion:(id /* block */)arg2;
- (id)_monitoredAccountStore;
- (void)_reloadAccountStoreStateIsInitialLoad:(bool)arg1 completion:(id /* block */)arg2;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)monitoredAccountStore;
- (void)setVisibleAccountCount:(long long)arg1;
- (void)set_accountUpdateQueue:(id)arg1;
- (void)set_monitoredAccountStore:(id)arg1;
- (long long)visibleAccountCount;

@end
