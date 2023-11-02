
@interface AMSUIWebFamilyAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    ACAccount * _account;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dictionaryFromLookupResult:(id)arg1;
- (id)account;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAccount:(id)arg1;

@end
