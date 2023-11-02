
@interface INStartSendingUpdatesForwardingAction : INIntentForwardingAction <BSXPCSecureCoding> {
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _endpoint;
    <INIntentResponseObserver> * _observer;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <INIntentResponseObserver> *observer;
@property (readonly) Class superclass;

+ (Class)responseClass;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)connection;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)endpoint;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 endpoint:(id)arg2 observer:(id)arg3;
- (id)initWithIntent:(id)arg1 endpointProvider:(id)arg2 observer:(id)arg3;
- (id)observer;
- (void)setConnection:(id)arg1;

@end
