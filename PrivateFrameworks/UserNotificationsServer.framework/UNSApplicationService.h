
@interface UNSApplicationService : NSObject {
    UNSApplicationLauncher * _applicationLauncher;
    UNSNotificationCategoryRepository * _categoryRepository;
    NSMutableSet * _foregroundBundleIdentifiers;
    UNSLocalizationService * _localizationService;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithApplicationLauncher:(id)arg1 categoryRepository:(id)arg2 localizationService:(id)arg3;
- (bool)isApplicationForeground:(id)arg1;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
