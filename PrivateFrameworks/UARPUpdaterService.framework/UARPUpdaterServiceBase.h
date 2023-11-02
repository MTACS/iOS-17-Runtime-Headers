
@interface UARPUpdaterServiceBase : NSObject <UARPUpdaterService>

- (void)bsdNotificationReceived:(id)arg1;
- (void)consentReceived:(id)arg1;
- (void)consentReceivedPostLogoutMode:(id)arg1;
- (void)dasActivityReceived:(id)arg1;
- (void)disabledProductIdentifiers:(id)arg1;
- (void)eaRuleMatched:(id)arg1;
- (void)getBSDNotificationsListWithReply:(id /* block */)arg1;
- (void)getDASActivityListWithReply:(id /* block */)arg1;
- (void)getIsBusyStatusWithReply:(id /* block */)arg1;
- (void)getMatchingServicesListWithReply:(id /* block */)arg1;
- (id)init;
- (void)ioKitRuleMatched:(id)arg1;
- (void)standaloneDynamicAssetSolicitation:(id)arg1 modelNumber:(id)arg2 notifyService:(id)arg3 reply:(id /* block */)arg4;
- (void)standaloneDynamicAssetSolicitation:(id)arg1 modelNumbers:(id)arg2 notifyService:(id)arg3 reply:(id /* block */)arg4;

@end
