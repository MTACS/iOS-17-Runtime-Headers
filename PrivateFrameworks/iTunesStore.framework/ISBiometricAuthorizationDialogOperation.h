
@interface ISBiometricAuthorizationDialogOperation : ISOperation {
    NSDictionary * _buyParams;
    SSBiometricAuthenticationContext * _context;
    ISDialog * _dialog;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    ISDialog * _fallbackDialog;
    NSDictionary * _metricsDictionary;
    NSURL * _redirectURL;
    ISDialogButton * _selectedButton;
    ISTouchIDDialog * _touchIDDialog;
    ISURLBag * _urlBag;
    NSString * _userAgent;
}

@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext;
@property (copy) NSDictionary *buyParams;
@property (readonly) ISDialog *dialog;
@property (retain) ISDialog *fallbackDialog;
@property (copy) NSDictionary *metricsDictionary;
@property (readonly) NSURL *redirectURL;
@property (readonly) ISDialogButton *selectedButton;
@property (retain) ISTouchIDDialog *touchIDDialog;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (void)_findSelectedButtonForButtons:(id)arg1;
- (void)_loadURLBag;
- (void)_performMetricsWithBiometricMatch:(unsigned long long)arg1 didBiometricsFail:(bool)arg2;
- (bool)_runAuthkitOperationWithError:(id)arg1 returningError:(id*)arg2;
- (bool)_runSignatureOperationReturningError:(id*)arg1;
- (bool)_shouldFallbackToAuthKitForError:(id)arg1;
- (id)biometricAuthenticationContext;
- (id)buyParams;
- (id)dialog;
- (id)fallbackDialog;
- (id)initWithTouchIDDialog:(id)arg1 fallbackDialog:(id)arg2;
- (id)metricsDictionary;
- (id)redirectURL;
- (void)run;
- (id)selectedButton;
- (void)setBiometricAuthenticationContext:(id)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setFallbackDialog:(id)arg1;
- (void)setMetricsDictionary:(id)arg1;
- (void)setTouchIDDialog:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)touchIDDialog;
- (id)userAgent;

@end
