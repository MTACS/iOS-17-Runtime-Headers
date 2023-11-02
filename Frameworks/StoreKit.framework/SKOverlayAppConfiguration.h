
@interface SKOverlayAppConfiguration : SKOverlayConfiguration

@property (nonatomic, readonly, retain) ASOOverlayAppConfiguration *_backing;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *campaignToken;
@property (nonatomic, retain) NSString *customProductPageIdentifier;
@property (nonatomic, retain) NSString *latestReleaseID;
@property (nonatomic) long long position;
@property (nonatomic, retain) NSString *providerToken;
@property (nonatomic) bool userDismissible;

- (id)_impressionDictFromImpression:(id)arg1;
- (id)_init;
- (id)additionalValueForKey:(id)arg1;
- (id)appIdentifier;
- (id)campaignToken;
- (id)customProductPageIdentifier;
- (id)initWithAppIdentifier:(id)arg1 position:(long long)arg2;
- (id)initWithBacking:(id)arg1;
- (id)latestReleaseID;
- (long long)position;
- (id)providerToken;
- (void)setAdImpression:(id)arg1;
- (void)setAdditionalValue:(id)arg1 forKey:(id)arg2;
- (void)setAppIdentifier:(id)arg1;
- (void)setCampaignToken:(id)arg1;
- (void)setCustomProductPageIdentifier:(id)arg1;
- (void)setLatestReleaseID:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setProviderToken:(id)arg1;
- (void)setUserDismissible:(bool)arg1;
- (bool)userDismissible;

@end
