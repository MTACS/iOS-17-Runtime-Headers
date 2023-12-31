
@protocol DADiagnosticsRemoteViewControllerInterface

@required

- (void)viewServiceDidEnableVolumeHUD:(bool)arg1;
- (void)viewServiceDidFinishWithReason:(unsigned long long)arg1;
- (void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)viewServiceDidSuspend;

@end
