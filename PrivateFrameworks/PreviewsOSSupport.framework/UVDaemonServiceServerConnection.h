
@interface UVDaemonServiceServerConnection : UVBSConnection <UVBSServerConnection>

@property (readonly) int clientPid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activateWithInterfaceTarget:(id)arg1;

@end
