
@interface ACCFeatureAudioProduct : NSObject {
    NSMutableSet * _endpoints;
    NSXPCConnection * _xpcConnection;
}

@property (retain) NSMutableSet *endpoints;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_connectToACCFeatureAudioProduct;
- (void)_disconnectFromACCFeatureAudioProduct;
- (id)_init;
- (void)accessoryAttached:(id)arg1 connection:(id)arg2;
- (void)accessoryDetached:(id)arg1 connection:(id)arg2;
- (id)endpoints;
- (void)processAudioProductCerts:(id)arg1 forModel:(id)arg2 firstConnectionAfterPair:(bool)arg3 connection:(id)arg4 endpoint:(id)arg5;
- (void)setEndpoints:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
