
@interface SPFirmwareUpdateSession : NSObject <SPFirmwareUpdateSessionPrivateProtocol> {
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCSession * _session;
    FMFuture * _sessionInvalidationFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, retain) FMFuture *sessionInvalidationFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beaconsInFirmwareUpdateState:(long long)arg1 dateInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)candidateBeaconsWithCompletion:(id /* block */)arg1;
- (void)connectionTokensForBeaconUUID:(id)arg1 dateInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)firmwareUpdateStateForBeaconUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)initiateFirmwareUpdateForAllEligibleBeaconsWithCompletion:(id /* block */)arg1;
- (id)proxy;
- (id)queue;
- (id)remoteInterface;
- (id)serviceDescription;
- (id)session;
- (id)sessionInvalidationFuture;
- (void)setQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionInvalidationFuture:(id)arg1;
- (void)updateBeaconUUID:(id)arg1 firmwareUpdateState:(long long)arg2 systemVersion:(id)arg3 error:(id)arg4 completion:(id /* block */)arg5;

@end
