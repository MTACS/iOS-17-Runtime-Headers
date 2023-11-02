
@interface CNFRegAccountAuthorizationController : CNFRegAccountWebViewController {
    NSString * _authID;
    NSString * _authToken;
    <CNFRegAccountAuthorizationDelegate> * _delegate;
}

@property (nonatomic, copy) NSString *authID;
@property (nonatomic, copy) NSString *authToken;
@property (nonatomic) <CNFRegAccountAuthorizationDelegate> *delegate;

- (void).cxx_destruct;
- (id)authID;
- (id)authIdHeaderValue;
- (id)authToken;
- (id)authTokenHeaderValue;
- (id)bagKey;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)initWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;
- (id)logName;
- (void)setAuthID:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
