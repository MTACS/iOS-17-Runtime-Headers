
@interface SPBeaconSharingManager : NSObject <SPBeaconSharingClientXPCProtocol, SPBeaconSharingProtocol> {
    <SPBeaconSharingXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _retryCount;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    id /* block */  _shareUpdateBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPBeaconSharingXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, copy) id /* block */ shareUpdateBlock;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)arg1;
- (void)acceptShare:(id)arg1 completion:(id /* block */)arg2;
- (void)allSharesIncludingHiddenWithCompletion:(id /* block */)arg1;
- (void)allSharesWithCompletion:(id /* block */)arg1;
- (void)checkDataIntegrityWithShareIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)cleanupAllRecordsOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)declineShare:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadKeysWithCircleIdentifier:(id)arg1 fromBookmark:(bool)arg2 completion:(id /* block */)arg3;
- (void)forceBreakAllSharesOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)forceBreakAllSharesWithUser:(id)arg1 completion:(id /* block */)arg2;
- (void)forceDeclineShare:(id)arg1 completion:(id /* block */)arg2;
- (void)forceStopSharing:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (void)lookForOrphanedRecordsWithCompletion:(id /* block */)arg1;
- (id)proxy;
- (id)queue;
- (void)receivedUpdatedShares:(id)arg1;
- (void)removeExpiredSharesWithCompletion:(id /* block */)arg1;
- (void)removeShare:(id)arg1 completion:(id /* block */)arg2;
- (void)requestShare:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)retryCount;
- (id)serviceDescription;
- (id)session;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setShareUpdateBlock:(id /* block */)arg1;
- (void)share:(id)arg1 recipients:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)shareUpdateBlock;
- (void)sharingLimitsWithCompletion:(id /* block */)arg1;
- (void)startRefreshingSharesWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)stopRefreshingSharesWithCompletion:(id /* block */)arg1;
- (void)stopSharing:(id)arg1 completion:(id /* block */)arg2;
- (void)updatedCircleIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)uploadKeysWithCircleIdentifier:(id)arg1 isInitialUpload:(bool)arg2 completion:(id /* block */)arg3;

@end
