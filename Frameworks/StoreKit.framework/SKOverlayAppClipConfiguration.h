
@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration

@property (nonatomic, readonly, retain) ASOOverlayAppClipConfiguration *_backing;
@property (nonatomic, retain) NSString *campaignToken;
@property (nonatomic, retain) NSString *customProductPageIdentifier;
@property (nonatomic, retain) NSString *latestReleaseID;
@property (nonatomic) long long position;
@property (nonatomic, retain) NSString *providerToken;

- (id)_init;
- (id)additionalValueForKey:(id)arg1;
- (id)campaignToken;
- (id)customProductPageIdentifier;
- (id)initWithBacking:(id)arg1;
- (id)initWithPosition:(long long)arg1;
- (id)latestReleaseID;
- (long long)position;
- (id)providerToken;
- (void)setAdditionalValue:(id)arg1 forKey:(id)arg2;
- (void)setCampaignToken:(id)arg1;
- (void)setCustomProductPageIdentifier:(id)arg1;
- (void)setLatestReleaseID:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setProviderToken:(id)arg1;

@end
