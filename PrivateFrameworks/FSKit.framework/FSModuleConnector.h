
@interface FSModuleConnector : NSObject <FSModuleProjectOps, FSModuleXPC> {
    NSXPCConnection * _ourConnection;
    FSModuleExtension * _ourModule;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCConnection *ourConnection;
@property (retain) FSModuleExtension *ourModule;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)checkIn:(id)arg1 reply:(id /* block */)arg2;
- (void)checkResource:(id)arg1 options:(id)arg2 connection:(id)arg3 taskID:(id)arg4 reply:(id /* block */)arg5;
- (void)formatResource:(id)arg1 options:(id)arg2 connection:(id)arg3 taskID:(id)arg4 reply:(id /* block */)arg5;
- (void)getLegacyVolumeEndpoint:(id)arg1 reply:(id /* block */)arg2;
- (void)getProgressPortForTask:(id)arg1 reply:(id /* block */)arg2;
- (void)getVolumeEndpoint:(id)arg1 reply:(id /* block */)arg2;
- (id)ourConnection;
- (id)ourModule;
- (void)ping:(id /* block */)arg1;
- (void)probeResource:(id)arg1 reply:(id /* block */)arg2;
- (void)sendTaskUpdate:(id)arg1;
- (void)sendWipeResource:(id)arg1 includingBlockRanges:(id)arg2 excludingBlockRanges:(id)arg3 reply:(id /* block */)arg4;
- (void)setOurConnection:(id)arg1;
- (void)setOurModule:(id)arg1;

@end
