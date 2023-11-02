
@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler> {
    IKJSInspectorController * _controller;
    NSMutableDictionary * _loaders;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addInterceptionWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 url:(id)arg3 stage:(long long*)arg4;
- (void)clearAllTrackedLoaders;
- (id)controller;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getResponseBodyWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 requestId:(id)arg3;
- (void)getSerializedCertificateWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 requestId:(id)arg3;
- (id)initWithInspectorController:(id)arg1;
- (void)interceptContinueWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 requestId:(id)arg3;
- (void)interceptWithResponseWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 requestId:(id)arg3 content:(id)arg4 base64Encoded:(bool)arg5 mimeType:(id*)arg6 status:(int*)arg7 statusText:(id*)arg8 headers:(id*)arg9;
- (void)loadResourceWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4;
- (id)registerLoaderWithIdentifier:(id)arg1;
- (void)removeInterceptionWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 url:(id)arg3 stage:(long long*)arg4;
- (void)resolveWebSocketWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 requestId:(id)arg3 objectGroup:(id*)arg4;
- (void)setExtraHTTPHeadersWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 headers:(id)arg3;
- (void)setInterceptionEnabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 enabled:(bool)arg3;
- (void)setResourceCachingDisabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 disabled:(bool)arg3;
- (void)unregisterLoaderWithIdentifier:(id)arg1;

@end
