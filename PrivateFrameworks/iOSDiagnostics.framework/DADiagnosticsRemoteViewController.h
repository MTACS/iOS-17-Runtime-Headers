
@interface DADiagnosticsRemoteViewController : _UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface> {
    <DADiagnosticsRemoteViewControllerDelegate> * _delegate;
    float  _originalScreenBrightness;
    DADiagnosticResponder * _responder;
}

@property (nonatomic) <DADiagnosticsRemoteViewControllerDelegate> *delegate;
@property (nonatomic) float originalScreenBrightness;
@property (nonatomic, retain) DADiagnosticResponder *responder;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_stringForReason:(unsigned long long)arg1;
- (id)_viewServiceInterface;
- (id)delegate;
- (float)originalScreenBrightness;
- (void)requiredSerialNumbers:(id)arg1;
- (id)responder;
- (void)selectableSerialNumbers:(id)arg1;
- (void)sessionToken:(id)arg1;
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
