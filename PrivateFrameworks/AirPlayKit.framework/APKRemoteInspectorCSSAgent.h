
@interface APKRemoteInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler> {
    <APKRemoteInspectorCSSAgentDelegate> * _delegate;
    <APKRemoteInspectorCSSEventDispatcherProtocol> * _dispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APKRemoteInspectorCSSAgentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <APKRemoteInspectorCSSEventDispatcherProtocol> *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)dispatcher;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getComputedStyleForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getInlineStylesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (id)initWithDispatcher:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
