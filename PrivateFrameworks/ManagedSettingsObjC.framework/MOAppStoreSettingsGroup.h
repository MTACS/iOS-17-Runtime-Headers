
@interface MOAppStoreSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *denyInAppPurchases;
@property (nonatomic, retain) NSNumber *maximumRating;
@property (nonatomic, retain) NSNumber *requirePasswordForPurchases;

+ (id)denyInAppPurchasesMetadata;
+ (id)groupName;
+ (id)maximumRatingMetadata;
+ (id)requirePasswordForPurchasesMetadata;

- (id)denyInAppPurchases;
- (id)maximumRating;
- (id)requirePasswordForPurchases;
- (void)setDenyInAppPurchases:(id)arg1;
- (void)setMaximumRating:(id)arg1;
- (void)setRequirePasswordForPurchases:(id)arg1;

@end
