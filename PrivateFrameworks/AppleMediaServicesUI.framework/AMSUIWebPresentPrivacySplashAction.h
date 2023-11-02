
@interface AMSUIWebPresentPrivacySplashAction : AMSUIWebAction {
    NSString * _privacyIdentifier;
}

@property (nonatomic, retain) NSString *privacyIdentifier;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)privacyIdentifier;
- (id)runAction;
- (void)setPrivacyIdentifier:(id)arg1;

@end
