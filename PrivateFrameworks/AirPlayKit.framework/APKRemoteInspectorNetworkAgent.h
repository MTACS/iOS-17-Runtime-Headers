
@interface APKRemoteInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler> {
    <APKRemoteInspectorNetworkAgentDelegate> * _delegate;
    <APKRemoteInspectorNetworkEventDispatcherProtocol> * _dispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APKRemoteInspectorNetworkAgentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <APKRemoteInspectorNetworkEventDispatcherProtocol> *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)dispatcher;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithDispatcher:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
