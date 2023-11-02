
@protocol UARPUpdaterService

@required

- (void)bsdNotificationReceived:(NSString *)arg1;
- (void)consentReceived:(UARPConsent *)arg1;
- (void)consentReceivedPostLogoutMode:(UARPConsent *)arg1;
- (void)dasActivityReceived:(UARPServiceUpdaterDASMatchingRule *)arg1;
- (void)disabledProductIdentifiers:(NSDictionary *)arg1;
- (void)eaRuleMatched:(UARPServiceUpdaterMatchedEARule *)arg1;
- (void)getBSDNotificationsListWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getDASActivityListWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getMatchingServicesListWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)ioKitRuleMatched:(UARPServiceUpdaterMatchedIOKitRule *)arg1;
- (void)standaloneDynamicAssetSolicitation:(void *)arg1 modelNumber:(void *)arg2 notifyService:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: UARPAssetTag *, NSString *, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)standaloneDynamicAssetSolicitation:(void *)arg1 modelNumbers:(void *)arg2 notifyService:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: UARPAssetTag *, NSArray *, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)getIsBusyStatusWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
