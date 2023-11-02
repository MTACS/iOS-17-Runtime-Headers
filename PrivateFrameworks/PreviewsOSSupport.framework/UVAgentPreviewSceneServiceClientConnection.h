
@interface UVAgentPreviewSceneServiceClientConnection : UVBSConnection <UVBSClientConnection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createWithEndpoint:(id)arg1 forSceneIdentifier:(id)arg2 error:(id*)arg3;

- (void)activateWithInterfaceTarget:(id)arg1;

@end
