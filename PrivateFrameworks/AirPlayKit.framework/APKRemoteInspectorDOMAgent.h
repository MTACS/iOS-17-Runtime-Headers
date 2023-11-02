
@interface APKRemoteInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler> {
    <APKRemoteInspectorDOMAgentDelegate> * _delegate;
    <APKRemoteInspectorDOMEventDispatcherProtocol> * _dispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APKRemoteInspectorDOMAgentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <APKRemoteInspectorDOMEventDispatcherProtocol> *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)dispatcher;
- (void)getAttributesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getDocumentWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getOuterHTMLWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (id)initWithDispatcher:(id)arg1;
- (void)requestChildNodesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 depth:(int*)arg4;
- (void)setDelegate:(id)arg1;

@end
