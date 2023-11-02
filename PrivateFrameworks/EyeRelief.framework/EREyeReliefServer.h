
@interface EREyeReliefServer : NSObject <EREyeReliefProtocol, NSXPCListenerDelegate> {
    NSMutableArray * _clientConnections;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    id /* block */  _distanceSamplingToggleHandler;
    id /* block */  _isDistanceSamplingEnabledHandler;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ distanceSamplingToggleHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ isDistanceSamplingEnabledHandler;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)clientConnections;
- (id)connectionQueue;
- (id /* block */)distanceSamplingToggleHandler;
- (id)init;
- (void)isDistanceSamplingEnabled:(id /* block */)arg1;
- (id /* block */)isDistanceSamplingEnabledHandler;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClientConnections:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setDistanceSamplingToggleHandler:(id /* block */)arg1;
- (void)setIsDistanceSamplingEnabledHandler:(id /* block */)arg1;
- (void)setListener:(id)arg1;
- (void)startServer;
- (void)toggleDistanceSampling:(id /* block */)arg1;

@end
