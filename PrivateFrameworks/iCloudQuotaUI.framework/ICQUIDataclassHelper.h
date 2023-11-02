
@interface ICQUIDataclassHelper : NSObject

+ (bool)_isPhotosDataclass:(id)arg1;
+ (id)dataclassesToEnableForAccount:(id)arg1 excludedApps:(id)arg2;
+ (void)enableDataclass:(id)arg1 forAccount:(id)arg2 completion:(id /* block */)arg3;
+ (id)enabledAppsForAccount:(id)arg1 deprioritizedApps:(id)arg2;
+ (id)footerTextForSyncWithiCloudSpecifiersFromDataclasses:(id)arg1 forAccount:(id)arg2;
+ (id)iconForDataclass:(id)arg1;
+ (bool)isBackupEnabledForAccount:(id)arg1;
+ (bool)isSharedPhotoLibraryEnabled;
+ (bool)isiCPLEnabledForAccount:(id)arg1;
+ (id)localizedTextForDataclass:(id)arg1;
+ (id)unsyncedDataclassesExcludingPhotosForAccount:(id)arg1;

@end
