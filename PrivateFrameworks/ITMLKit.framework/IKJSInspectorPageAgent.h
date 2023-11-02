
@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler> {
    IKJSInspectorController * _controller;
    NSString * _currentFrameIdentifier;
    RWIProtocolPageFrameResourceTree * _resourceTree;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (nonatomic, retain) NSString *currentFrameIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RWIProtocolPageFrameResourceTree *resourceTree;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchEventWithBlock:(id /* block */)arg1;
- (id)controller;
- (id)currentFrameIdentifier;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)documentDidChange;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getResourceContentWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4;
- (void)getResourceTreeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)reloadWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 ignoreCache:(bool*)arg3 revalidateAllResources:(bool*)arg4;
- (id)resourceTree;
- (void)setCurrentFrameIdentifier:(id)arg1;

@end
