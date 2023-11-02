
@interface UVAgentControlServiceClientConnection : UVBSConnection <UVBSClientConnection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createWithEndpoint:(id)arg1 error:(id*)arg2;

- (void)activateWithInterfaceTarget:(id)arg1;

@end
