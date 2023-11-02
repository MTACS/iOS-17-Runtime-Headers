
@interface ICQDaemonPlanRecommendation : NSObject

+ (id)accountForID:(id)arg1;
+ (void)calculateExtraQuotaNeededToSyncForAccountWithID:(id)arg1 isAccountFull:(bool)arg2 completion:(id /* block */)arg3;
+ (long long)calculateExtraQuotaNeededToSyncWithBackupSize:(long long)arg1;
+ (id)fullBackupSize;
+ (void)getLocalPhotoLibrarySizeWithCompletion:(id /* block */)arg1;
+ (bool)isBackupEnabledForAccount:(id)arg1;
+ (bool)isICPLEnabledForAccount:(id)arg1;
+ (bool)isPhotosLibraryIncludedInBackupForAccount:(id)arg1;

@end
