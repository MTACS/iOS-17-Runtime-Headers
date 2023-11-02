
@interface MPAVRouteConnection : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    MRExternalDevice * _externalDevice;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (getter=isConnecting, nonatomic, readonly) bool connecting;
@property (nonatomic, readonly) void*externalDevice;
@property (nonatomic, readonly) MRExternalDevice *externalDeviceObject;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_connectionStateDidChange:(unsigned int)arg1 error:(id)arg2;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1;
- (void)connectWithCompletion:(id /* block */)arg1;
- (void)connectWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)connectWithOptions:(unsigned long long)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)connectWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (void*)externalDevice;
- (id)externalDeviceObject;
- (id)initWithExternalDevice:(void*)arg1;
- (id)initWithExternalDeviceObject:(id)arg1;
- (id /* block */)invalidationHandler;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isInvalidated;
- (void)reset;
- (void)sendCustomData:(id)arg1;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
