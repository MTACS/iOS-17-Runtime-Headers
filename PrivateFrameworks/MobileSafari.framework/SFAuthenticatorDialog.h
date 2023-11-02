
@interface SFAuthenticatorDialog : SFDialog <SFAuthenticatorDialog> {
    NSArray * _actions;
    _WKWebAuthenticationAssertionResponse * _assertionResponse;
    long long  _biometryType;
    SFDialogView * _dialogView;
    bool  _isForUpdateOnly;
    id /* block */  _localAuthenticatorPolicyHandler;
    NSString * _message;
    _WKWebAuthenticationPanel * _panel;
    id /* block */  _pinRequestHandler;
    long long  _responseSource;
    id /* block */  _selectAssertionResponseHandler;
    long long  _state;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForUpdateOnly;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) _WKWebAuthenticationPanel *panel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_didSelectRow:(id)arg1;
- (void)_shake;
- (id)actions;
- (void)dealloc;
- (void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(id /* block */)arg1;
- (void)didCompleteWithResponse:(id)arg1;
- (id)initWithPanel:(id)arg1;
- (bool)isForUpdateOnly;
- (id)message;
- (id)newDialogViewRepresentation;
- (id)panel;
- (long long)presentationStyle;
- (void)requestPINWithRemainingRetries:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)selectAssertionResponse:(id)arg1 source:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setActions:(id)arg1;
- (void)setIsForUpdateOnly:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)transitionToState:(long long)arg1;
- (void)triggerUseSecurityKey;
- (void)updateWebAuthenticationPanel:(long long)arg1;
- (id)useSecurityKeyAction;

@end
