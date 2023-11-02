
@interface AMSFinanceAuthenticateResponse : NSObject <AMSFinancePerformable> {
    AMSAuthenticateRequest * _authenticateRequest;
    NSDictionary * _dialogDictionary;
    AMSFinanceDialogResponse * _dialogResponse;
}

@property (nonatomic, readonly) AMSAuthenticateRequest *authenticateRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) AMSFinanceDialogResponse *dialogResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_authenticateRequestWithAuthType:(unsigned long long)arg1 taskInfo:(id)arg2 dialogResponse:(id)arg3 serviceIdentifier:(id)arg4;
+ (id)_handleAuthResult:(id)arg1 authError:(id)arg2 originalRequest:(id)arg3 actionResult:(id)arg4 redirectURL:(id)arg5 taskInfo:(id)arg6;
+ (void)_handleDialogFromAuthError:(id)arg1 taskInfo:(id)arg2;
+ (id)_performAuthRequest:(id)arg1 actionResult:(id)arg2 redirectURL:(id)arg3 taskInfo:(id)arg4;
+ (id)_performSyncAuthRequest:(id)arg1 actionResult:(id)arg2 redirectURL:(id)arg3 taskInfo:(id)arg4;
+ (id)_presentAuthRequest:(id)arg1 taskInfo:(id)arg2;
+ (id)_serviceIdentifierForResponse:(id)arg1 taskInfo:(id)arg2;
+ (void)_updateTaskWithAuthedAccount:(id)arg1 taskInfo:(id)arg2;
+ (void)_updateTaskWithLastCredentialSource:(id)arg1 taskInfo:(id)arg2;
+ (unsigned long long)authenticationTypeForResponse:(id)arg1 responseDictionary:(id)arg2;
+ (id)performAuthFromResponse:(id)arg1 taskInfo:(id)arg2;

- (void).cxx_destruct;
- (id)_locateActionableButtonUsingDialogResponse:(id)arg1;
- (id)authenticateRequest;
- (id)dialogDictionary;
- (id)dialogResponse;
- (id)initWithResponseDictionary:(id)arg1 taskInfo:(id)arg2;
- (id)performWithTaskInfo:(id)arg1;
- (void)setDialogDictionary:(id)arg1;

@end
