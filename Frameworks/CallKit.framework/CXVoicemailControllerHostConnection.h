
@interface CXVoicemailControllerHostConnection : NSObject <CXVoicemailControllerHostProtocol, CXVoicemailControllerVendorProtocol> {
    NSString * _applicationIdentifier;
    NSURL * _bundleURL;
    NSSet * _capabilities;
    NSXPCConnection * _connection;
    <CXVoicemailControllerHostConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSURL *bundleURL;
@property (nonatomic, copy) NSSet *capabilities;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXVoicemailControllerHostConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPermittedToUsePrivateAPI, nonatomic, readonly) bool permittedToUsePrivateAPI;
@property (nonatomic, readonly) <CXVoicemailControllerVendorProtocol> *remoteObjectProxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)addOrUpdateVoicemails:(id)arg1;
- (id)applicationIdentifier;
- (id)bundleURL;
- (id)capabilities;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithConnection:(id)arg1 serialQueue:(id)arg2;
- (bool)isPermittedToUsePrivateAPI;
- (id)remoteObjectProxy;
- (oneway void)removeVoicemails:(id)arg1;
- (oneway void)requestTransaction:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)requestVoicemails:(id /* block */)arg1;
- (id)serialQueue;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
