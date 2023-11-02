
@interface CDPUIStatusChangeController : NSObject {
    id /* block */  _completionCallback;
    <CDPUIStatusChangeModel> * _model;
    id /* block */  _userActionCallback;
}

@property (nonatomic, copy) id /* block */ completionCallback;
@property (nonatomic, readonly) <CDPUIStatusChangeModel> *model;
@property (nonatomic, copy) id /* block */ userActionCallback;

+ (id)controllerWithTargetWalrusStatus:(unsigned long long)arg1;
+ (id)controllerWithTargetWalrusStatus:(unsigned long long)arg1 altDSID:(id)arg2;
+ (id)controllerWithTargetWebAccessStatus:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_alertWithViewController:(id)arg1;
- (id)_configureAlertController;
- (id)_configurePasscodeVerificationControllerWithViewController:(id)arg1 presentationType:(unsigned long long)arg2;
- (void)_handleUserChoice:(unsigned long long)arg1;
- (void)_handleUserChoice:(unsigned long long)arg1 error:(id)arg2;
- (void)_passcodeVerificationflowWithViewController:(id)arg1 presentationType:(unsigned long long)arg2;
- (id /* block */)completionCallback;
- (id)initWithModel:(id)arg1;
- (id)model;
- (void)presentWithViewController:(id)arg1 presentationType:(unsigned long long)arg2;
- (void)setCompletionCallback:(id /* block */)arg1;
- (void)setUserActionCallback:(id /* block */)arg1;
- (id /* block */)userActionCallback;

@end
