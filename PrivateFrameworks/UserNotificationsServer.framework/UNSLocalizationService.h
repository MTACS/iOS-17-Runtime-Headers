
@interface UNSLocalizationService : NSObject {
    NSMutableDictionary * _bundleIdentifierToBundle;
    NSMutableDictionary * _bundleIdentifierToBundleURL;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_queue_bundleWithIdentifier:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_unloadBundleWithIdentifier:(id)arg1;
- (id)bundleWithIdentifier:(id)arg1;
- (id)init;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)unloadBundleWithIdentifier:(id)arg1;

@end
