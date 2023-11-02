
@interface _EXNSExtensionContextShimImplementation : NSObject <_EXNSExtensionShimExtensionXPCProtocol, _NSExtensionContextInternalImplementation> {
    NSUUID * _UUID;
    id  __principalObject;
    _EXNSExtensionShimExtension * _extension;
    struct { 
        unsigned int val[8]; 
    }  _extensionHostAuditToken;
    id /* block */  _requestCleanUpBlock;
    _EXSceneSession * _sceneSession;
}

@property (readonly, copy) NSUUID *_UUID;
@property (retain) id __principalObject;
@property (readonly) NSXPCConnection *_auxiliaryConnection;
@property (readonly) struct { unsigned int x1[8]; } _extensionHostAuditToken;
@property (readonly) id _principalObject;
@property (setter=_setRequestCleanUpBlock:, copy) id /* block */ _requestCleanUpBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property _EXNSExtensionShimExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *inputItems;
@property _EXSceneSession *sceneSession;
@property (readonly) Class superclass;

+ (id)makeContextWithSceneSession:(id)arg1;

- (void).cxx_destruct;
- (id)_UUID;
- (id)__principalObject;
- (id)_auxiliaryConnection;
- (struct { unsigned int x1[8]; })_extensionHostAuditToken;
- (id)_principalObject;
- (id /* block */)_requestCleanUpBlock;
- (void)_setRequestCleanUpBlock:(id /* block */)arg1;
- (void)beginContextRequest:(id)arg1 endpoint:(id)arg2 reply:(id /* block */)arg3;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)extension;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;
- (id)initWithSceneSession:(id)arg1;
- (id)inputItems;
- (void)invalidate;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sceneSession;
- (void)setExtension:(id)arg1;
- (void)setSceneSession:(id)arg1;
- (void)set__principalObject:(id)arg1;
- (bool)shoudAcceptConnection:(id)arg1;

@end
