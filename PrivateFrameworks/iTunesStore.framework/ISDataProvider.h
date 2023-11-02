
@interface ISDataProvider : NSObject <NSCopying> {
    unsigned long long  _authenticatedAccountCredentialSource;
    NSNumber * _authenticatedAccountDSID;
    SSAuthenticationContext * _authenticationContext;
    SSURLBagContext * _bagContext;
    SSBiometricAuthenticationContext * _biometricAuthenticationContext;
    <ISBiometricSessionDelegate> * _biometricSessionDelegate;
    long long  _contentLength;
    NSString * _contentType;
    long long  _errorHandlerResponseType;
    id  _output;
    ISOperation * _parentOperation;
    NSURL * _redirectURL;
    NSURLResponse * _response;
}

@property unsigned long long authenticatedAccountCredentialSource;
@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) SSAuthenticationContext *authenticationContext;
@property (retain) SSURLBagContext *bagContext;
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext;
@property <ISBiometricSessionDelegate> *biometricSessionDelegate;
@property long long contentLength;
@property (retain) NSString *contentType;
@property long long errorHandlerResponseType;
@property (retain) id output;
@property ISOperation *parentOperation;
@property (retain) NSURL *redirectURL;
@property (retain) NSURLResponse *response;

+ (id)provider;

- (void).cxx_destruct;
- (void)_performActionsForButton:(id)arg1 withDialog:(id)arg2;
- (bool)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2;
- (unsigned long long)authenticatedAccountCredentialSource;
- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (id)bagContext;
- (id)biometricAuthenticationContext;
- (id)biometricSessionDelegate;
- (bool)canStreamContentLength:(long long)arg1 error:(id*)arg2;
- (id)closeStream;
- (void)configureFromProvider:(id)arg1;
- (long long)contentLength;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)errorHandlerResponseType;
- (id)init;
- (bool)isStream;
- (bool)isStreamComplete;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (id)output;
- (id)parentOperation;
- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (id)redirectURL;
- (void)resetStream;
- (id)response;
- (bool)runAuthorizationDialog:(id)arg1 error:(id*)arg2;
- (bool)runSubOperation:(id)arg1 error:(id*)arg2;
- (bool)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 error:(id*)arg3;
- (bool)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 metricsDictionary:(id)arg3 error:(id*)arg4;
- (void)setAuthenticatedAccountCredentialSource:(unsigned long long)arg1;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setBagContext:(id)arg1;
- (void)setBiometricAuthenticationContext:(id)arg1;
- (void)setBiometricSessionDelegate:(id)arg1;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setErrorHandlerResponseType:(long long)arg1;
- (void)setOutput:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setup;
- (void)streamCancelled;
- (void)streamDidFailWithError:(id)arg1;
- (long long)streamedBytes;

@end
