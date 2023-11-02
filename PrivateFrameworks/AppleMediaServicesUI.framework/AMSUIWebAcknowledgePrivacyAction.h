
@interface AMSUIWebAcknowledgePrivacyAction : AMSUIWebAction {
    ACAccount * _account;
    NSString * _privacyIdentifier;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *privacyIdentifier;

- (void).cxx_destruct;
- (id)account;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)privacyIdentifier;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setPrivacyIdentifier:(id)arg1;

@end
