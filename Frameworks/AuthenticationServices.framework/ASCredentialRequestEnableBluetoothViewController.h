
@interface ASCredentialRequestEnableBluetoothViewController : ASCredentialRequestPaneViewController {
    NSObject<OS_os_activity> * _authorizationActivity;
    id /* block */  _enableBluetoothHandler;
    ASCAuthorizationPresentationContext * _presentationContext;
}

@property (nonatomic, copy) id /* block */ enableBluetoothHandler;
@property (nonatomic, readonly) ASCAuthorizationPresentationContext *presentationContext;

- (void).cxx_destruct;
- (void)_enableBluetooth;
- (id)_message;
- (void)_setUpButtonPane;
- (void)_setUpMessagePane;
- (void)_setUpTitlePane;
- (id /* block */)enableBluetoothHandler;
- (id)initWithPresentationContext:(id)arg1 activity:(id)arg2;
- (id)presentationContext;
- (void)setEnableBluetoothHandler:(id /* block */)arg1;
- (void)viewDidLoad;

@end
