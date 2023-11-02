
@interface UNSNotificationAuthorizationService : NSObject {
    UNSCriticalAlertAuthorizationAlertController * _criticalAlertAuthorizationAlertController;
    UNSDefaultDataProviderFactory * _dataProviderFactory;
    UNSLocalizationService * _localizationService;
    UNSNotificationAuthorizationAlertController * _notificationAuthorizationAlertController;
    UNSNotificationDeliveryAuthorizationAlertController * _notificationDeliveryAuthorizationAlertController;
    CRCarPlayAppPolicyEvaluator * _policyEvaluator;
    NSObject<OS_dispatch_queue> * _queue;
    UNSNotificationSettingsService * _settingsService;
}

- (void).cxx_destruct;
- (void)_didForegroundApplicationWithBundleIdentifier:(id)arg1;
- (bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 withExpirationDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithDataProviderFactory:(id)arg1 settingsService:(id)arg2 localizationService:(id)arg3;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 expirationDate:(id)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(id /* block */)arg2;

@end
