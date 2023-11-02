
@interface AMSMediaSharedProperties : NSObject {
    AMSURLSession * _session;
    <AMSMediaTokenServiceProtocol> * _tokenService;
}

@property (nonatomic, readonly) AMSURLSession *session;
@property (nonatomic, readonly) <AMSMediaTokenServiceProtocol> *tokenService;

+ (id)_propertiesForClientIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 clientInfo:(id)arg4 URLKnownToBeTrusted:(bool)arg5;
+ (id)accessQueue;
+ (id)propertiesForMarketingItemTask:(id)arg1;
+ (id)propertiesForMediaTask:(id)arg1;
+ (id)propertiesForMercuryCacheFetchTask:(id)arg1;
+ (id)propertiesForNotificationSettingsTask:(id)arg1;
+ (id)propertiesForRatingsTask:(id)arg1;
+ (id)propertiesForStorefrontsTask:(id)arg1;
+ (id)propertiesForUserNotificationSettingsTask:(id)arg1;
+ (id)sharedPropertiesMapTable;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 clientInfo:(id)arg4 URLKnownToBeTrusted:(bool)arg5;
- (void)dealloc;
- (id)session;
- (id)tokenService;

@end
