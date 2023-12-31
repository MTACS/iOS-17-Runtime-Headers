
@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface> {
    <DADiagnosticsRemoteDelegate> * _delegate;
    float  _originalScreenBrightness;
    DADiagnosticResponder * _responder;
}

@property (nonatomic) <DADiagnosticsRemoteDelegate> *delegate;
@property (nonatomic) float originalScreenBrightness;
@property (nonatomic, retain) DADiagnosticResponder *responder;

+ (id)exportedInterface;
+ (void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_viewServiceInterface;
- (id)delegate;
- (id)disconnect;
- (float)originalScreenBrightness;
- (id)responder;
- (void)setDelegate:(id)arg1;
- (void)setOriginalScreenBrightness:(float)arg1;
- (void)setResponder:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidEnableVolumeHUD:(bool)arg1;
- (void)viewServiceDidFinishWithReason:(unsigned long long)arg1;
- (void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)viewServiceDidSuspend;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
