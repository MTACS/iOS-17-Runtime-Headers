
@interface AMSUIWebAuthenticateAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    bool  _isAuthenticatingCloud;
    bool  _makeCurrentAccount;
    bool  _pauseTimeouts;
    AMSAuthenticateRequest * _request;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAuthenticatingCloud;
@property (nonatomic) bool makeCurrentAccount;
@property (nonatomic) bool pauseTimeouts;
@property (nonatomic, retain) AMSAuthenticateRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_responseForAccount:(id)arg1;
- (void)_updateContextWithAccountIfNeeded:(id)arg1;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (bool)isAuthenticatingCloud;
- (bool)makeCurrentAccount;
- (bool)pauseTimeouts;
- (id)request;
- (id)runAction;
- (void)setIsAuthenticatingCloud:(bool)arg1;
- (void)setMakeCurrentAccount:(bool)arg1;
- (void)setPauseTimeouts:(bool)arg1;
- (void)setRequest:(id)arg1;

@end
