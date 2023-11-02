
@interface DKDiagnosticService : NSObject <NSXPCListenerDelegate> {
    NSMutableArray * _connections;
    NSXPCListener * _listener;
    Class  _principalClass;
}

@property (nonatomic, retain) NSMutableArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) Class principalClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connections;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (Class)principalClass;
- (void)resume;
- (void)setConnections:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPrincipalClass:(Class)arg1;

@end
