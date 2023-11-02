
@interface LTUIRemoteViewController : _UIRemoteViewController <LTUIViewServiceExtensionHostProtocol> {
    <LTUIViewServiceExtensionHostProtocol> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LTUIViewServiceExtensionHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)confirmUserConsent;
- (id)delegate;
- (void)dismiss;
- (void)expandSheet;
- (void)finishWithTranslation:(id)arg1;
- (void)remoteIsReady;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
