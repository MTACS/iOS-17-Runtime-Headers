
@interface MTSSystemCommissionerPairingManager : NSObject <HMFLogging> {
    MTSXPCServerProxy * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchPairingsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithServerProxy:(id)arg1;
- (void)removePairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverProxy;

@end
