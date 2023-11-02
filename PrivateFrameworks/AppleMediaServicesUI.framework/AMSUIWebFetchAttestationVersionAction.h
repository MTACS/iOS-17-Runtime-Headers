
@interface AMSUIWebFetchAttestationVersionAction : AMSUIWebAction {
    ACAccount * _account;
}

@property (nonatomic, retain) ACAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)minimumVersions;
- (id)runAction;
- (void)setAccount:(id)arg1;

@end
