
@interface MLROnDemandConnectionHandler : NSObject <MLROnDemandRemoteProtocol, _EXMainConnectionHandler> {
    <MLROnDemandTaskPerforming> * _pluginPrincipal;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MLROnDemandTaskPerforming> *pluginPrincipal;
@property (readonly) id principalObject;
@property (readonly) Class superclass;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPrincipalObject:(id)arg1;
- (void)performTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performTaskInternal:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pluginPrincipal;
- (id)principalObject;
- (void)setPluginPrincipal:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;
- (id)xpcConnection;

@end
