
@interface AMSUIWebRemoveDeviceOfferAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    ACAccount * _account;
    NSString * _identifier;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)identifier;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
