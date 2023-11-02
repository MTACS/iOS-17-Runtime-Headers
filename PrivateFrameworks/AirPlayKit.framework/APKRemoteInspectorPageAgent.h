
@interface APKRemoteInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler> {
    <APKRemoteInspectorPageAgentDelegate> * _delegate;
    <APKRemoteInspectorPageEventDispatcherProtocol> * _dispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APKRemoteInspectorPageAgentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <APKRemoteInspectorPageEventDispatcherProtocol> *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)dispatcher;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getResourceContentWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4;
- (void)getResourceTreeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithDispatcher:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
