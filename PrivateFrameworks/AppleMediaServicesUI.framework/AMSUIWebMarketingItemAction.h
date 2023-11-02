
@interface AMSUIWebMarketingItemAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    ACAccount * _account;
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    NSDictionary * _contextInfo;
    NSString * _offerHints;
    NSString * _placement;
    NSString * _serviceType;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (nonatomic, readonly) NSDictionary *contextInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *offerHints;
@property (nonatomic, readonly) NSString *placement;
@property (nonatomic, readonly) NSString *serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)contextInfo;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)offerHints;
- (id)placement;
- (id)runAction;
- (id)serviceType;

@end
