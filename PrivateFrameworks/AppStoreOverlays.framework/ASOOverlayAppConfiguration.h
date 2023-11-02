
@interface ASOOverlayAppConfiguration : NSObject <ASOOverlayConfiguration, NSSecureCoding> {
    NSMutableDictionary * _storage;
}

@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *campaignToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *latestReleaseID;
@property (nonatomic) long long position;
@property (nonatomic, copy) NSString *productVariantID;
@property (nonatomic, retain) NSString *providerToken;
@property (nonatomic, readonly, retain) NSMutableDictionary *storage;
@property (readonly) Class superclass;
@property (nonatomic) bool userDismissable;
@property (nonatomic) bool userDismissible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalValueForKey:(id)arg1;
- (id)appIdentifier;
- (id)campaignToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppIdentifier:(id)arg1 position:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)latestReleaseID;
- (long long)position;
- (id)productVariantID;
- (id)providerToken;
- (void)setAdditionalValue:(id)arg1 forKey:(id)arg2;
- (void)setAppIdentifier:(id)arg1;
- (void)setCampaignToken:(id)arg1;
- (void)setLatestReleaseID:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setProductVariantID:(id)arg1;
- (void)setProviderToken:(id)arg1;
- (void)setUserDismissable:(bool)arg1;
- (void)setUserDismissible:(bool)arg1;
- (id)storage;
- (bool)userDismissable;
- (bool)userDismissible;

@end
