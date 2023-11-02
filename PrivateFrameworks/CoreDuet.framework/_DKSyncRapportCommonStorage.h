
@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncCommonClass, _DKSyncRemoteStorage> {
    RPCompanionLinkClient * _client;
    NSMutableDictionary * _companionLinkClients;
    NSObject<OS_dispatch_source> * _companionLinkClientsCleanupTimer;
    NSString * _deviceID;
    NSDictionary * _failIfAsleepOption;
    _DKEventTypeResultStatsCounter * _failIfAsleepStats;
    bool  _isAvailable;
    unsigned long long  _outstandingRequestCount;
    NSMutableSet * _peerSourceDeviceIDsWithCompletedHandshakes;
    double  _retryTimeout;
    bool  _running;
}

@property (nonatomic) bool isAvailable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelOutstandingOperations;
- (id)client;
- (void)dealloc;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(id /* block */)arg2;
- (void)handshakeWithDuetSyncPeer:(id)arg1 completion:(id /* block */)arg2;
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
- (id)init;
- (bool)isAvailable;
- (bool)isTransportActiveForPeer:(id)arg1;
- (id)myDeviceID;
- (id)name;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(bool)arg4 options:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)setDeviceID:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)start;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (id)transformResponseError:(id)arg1;
- (long long)transportType;

@end
