
@interface ASDAppLibrary : NSObject <ASDServiceProvider> {
    ASDNotificationCenter * _notificationCenter;
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (long long)launchApp:(id)arg1;
+ (long long)launchApp:(id)arg1 onPairedDevice:(id)arg2;
+ (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(id /* block */)arg3;
+ (void)launchApp:(id)arg1 withResultHandler:(id /* block */)arg2;
+ (long long)launchMessagesExtensionForApp:(id)arg1;
+ (void)launchMessagesExtensionForApp:(id)arg1 withResultHandler:(id /* block */)arg2;
+ (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 withResultHandler:(id /* block */)arg2;
+ (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 withResultHandler:(id /* block */)arg2;
+ (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 withResultHandler:(id /* block */)arg2;
+ (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 withResultHandler:(id /* block */)arg2;
+ (unsigned char)openableStatusForExecutableAtPath:(id)arg1;
+ (id)sharedInstance;
+ (void)uninstallApp:(id)arg1 requestUserConfirmation:(bool)arg2 withResultHandler:(id /* block */)arg3;
+ (void)uninstallApp:(id)arg1 withResultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;

@end
