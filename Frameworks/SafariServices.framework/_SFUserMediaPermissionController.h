
@interface _SFUserMediaPermissionController : WBSUserMediaPermissionController

- (void)_didRetrieveUserMediaPermission:(unsigned long long)arg1 forDevices:(unsigned long long)arg2 url:(id)arg3 mainFrameURL:(id)arg4 decisionHandler:(id /* block */)arg5 dialogPresenter:(id)arg6;
- (void)coalescedAsynchronousWriter:(id)arg1 didFinishWritingData:(id)arg2;
- (void)requestUserMediaAuthorizationForDevices:(unsigned long long)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(id /* block */)arg4 dialogPresenter:(id)arg5;
- (void)savePendingChanges;

@end
