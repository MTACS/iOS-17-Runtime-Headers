
@interface AMSUserNotificationSettingsTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSString * _clientIdentifier;
    AMSProcessInfo * _clientInfo;
    NSString * _identifier;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (id)_countryCodeFromBag:(id)arg1;
- (id)_generateParametersForItems:(id)arg1;
- (id)_stringForKey:(id)arg1 fromBag:(id)arg2;
- (id)_url;
- (id)account;
- (id)bag;
- (id)clientIdentifier;
- (id)clientInfo;
- (id)fetchAllSettings;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 clientIdentifier:(id)arg2 account:(id)arg3 bag:(id)arg4;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (id)updateSettings:(id)arg1;

@end
