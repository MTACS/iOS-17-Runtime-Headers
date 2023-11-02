
@interface MFAccountValidator : NSObject {
    MFAccount * _account;
    MFActivityMonitor * _accountValidationActivity;
    id /* block */  _completionBlock;
    <MFAccountValidatorDelegate> * _delegate;
    struct { 
        unsigned int useSSL : 1; 
        unsigned int incomingServerSupportsSSL : 1; 
        unsigned int smtpServerSupportsSSL : 1; 
        unsigned int canceled : 1; 
        unsigned int performsValidationInBackground : 1; 
        unsigned int unused : 27; 
    }  _flags;
    NSArray * _incomingServerAuthSchemes;
    MFError * _incomingServerValidationError;
    NSArray * _smtpServerAuthSchemes;
    MFError * _smtpServerValidationError;
    MFMonitoredInvocation * _validationInvocation;
}

@property (nonatomic, readonly) MFAccount *account;
@property (nonatomic, readonly) bool accountIsValid;
@property (nonatomic, readonly) bool accountSupportsSSL;
@property (nonatomic) <MFAccountValidatorDelegate> *delegate;
@property (nonatomic, readonly) MFError *error;
@property (nonatomic, readonly) bool performsValidationInBackground;
@property (nonatomic, readonly) MFMonitoredInvocation *validationInvocation;

- (void).cxx_destruct;
- (void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2;
- (bool)_incomingServerValid;
- (id)_ispAccountInfo;
- (bool)_outgoingServerValid;
- (void)_validateAccount:(id)arg1;
- (void)_validateAccount:(id)arg1 withFallbacks:(bool)arg2;
- (void)_validateAccountWithoutFallbacks:(id)arg1;
- (id)account;
- (bool)accountIsValid;
- (bool)accountSupportsSSL;
- (bool)accountValidationCanceled;
- (void)cancelValidation;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)init;
- (id)initWithPerformsValidationInBackground:(bool)arg1;
- (bool)performsValidationInBackground;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (void)validateAccount:(id)arg1 useSSL:(bool)arg2;
- (void)validateAccount:(id)arg1 useSSL:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)validateAccountWithoutFallbacks:(id)arg1;
- (void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)validationInvocation;

@end