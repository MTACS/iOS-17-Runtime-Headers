
@interface AMSStorageDataMigrator : NSObject

+ (void)_migrateDeviceOfferEligibilityWithDatabase:(id)arg1;
+ (void)_migrateSharedStoreReviewWithDatabase:(id)arg1;
+ (void)migrateStorageToDefaultsForNonAMSInternal:(id)arg1;

@end
