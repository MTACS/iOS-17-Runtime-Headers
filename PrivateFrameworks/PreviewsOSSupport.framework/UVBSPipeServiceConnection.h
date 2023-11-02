
@interface UVBSPipeServiceConnection : UVBSConnection <UVBSPipeServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activateWithInterfaceTarget:(id)arg1;
- (oneway void)sendEncodedEvent:(id)arg1;
- (oneway void)sendEncodedEvent:(id)arg1 replyHandler:(id /* block */)arg2;

@end
