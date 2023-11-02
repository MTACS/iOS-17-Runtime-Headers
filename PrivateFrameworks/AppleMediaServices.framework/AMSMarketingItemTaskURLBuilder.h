
@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (id)_additionalQueryItems;
- (id)_countryCodeFromBag:(id)arg1;
- (id)_formattedURLPathWithBag:(id)arg1;
- (id)_languageTagFromBag:(id)arg1 fallback:(id)arg2;
- (id)_realmOverridesFromBag:(id)arg1;
- (id)_stringForKey:(id)arg1 fromBag:(id)arg2;
- (id)_urlPathFromBag:(id)arg1;
- (id)urlWithServiceType:(id)arg1 placement:(id)arg2 bag:(id)arg3 hydrateRelatedContents:(bool)arg4 offerHints:(id)arg5 additionalParameters:(id)arg6;

@end
