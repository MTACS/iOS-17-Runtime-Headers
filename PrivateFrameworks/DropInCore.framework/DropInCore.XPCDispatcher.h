
@interface DropInCore.XPCDispatcher : _TtCs12_SwiftObject <DIXPCServerInterface> {
    void audioSystemManager;
    void dropInManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void xpcClientDataSource;
}

- (void)cancelSessionWithContext:(id)arg1 session:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)checkInWithCompletionHandler:(id /* block */)arg1;
- (void)endSessionWithContext:(id)arg1 session:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getCurrentSessionWithCompletionHandler:(id /* block */)arg1;
- (void)getDownlinkMutedWithCompletionHandler:(id /* block */)arg1;
- (void)getUplinkMutedForCurrentSessionWithCompletionHandler:(id /* block */)arg1;
- (void)getUplinkMutedWithCompletionHandler:(id /* block */)arg1;
- (void)loadDevicesWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerAudioPowerWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestStateForDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDownlinkMuted:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setUplinkMuted:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setUplinkMutedForCurrentSession:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)startSessionWithContext:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateState:(long long)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;

@end
