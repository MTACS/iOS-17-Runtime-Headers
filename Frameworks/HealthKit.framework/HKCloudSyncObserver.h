
@interface HKCloudSyncObserver : NSObject <HKCloudSyncObserverClientInterface, HealthKitAdditions.CloudSyncStatusProvider, _HKXPCExportable> {
    <HKCloudSyncObserverDelegate> * _delegate;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSProgress * _progress;
    HKTaskServerProxyProvider * _proxyProvider;
    HKCloudSyncObserverStatus * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKCloudSyncObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKCloudSyncObserverStatus *status;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_clientQueue_didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2;
- (void)clientRemote_didFailToPopulateStatusWithError:(id)arg1;
- (void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1;
- (void)clientRemote_syncDidStart;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1 delegate:(id)arg2;
- (id)progress;
- (id)remoteInterface;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)startObservingSyncStatus;
- (void)startSyncIfRestoreNotCompleted;
- (id)status;

@end
