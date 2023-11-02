
@protocol DNDRemoteServiceServerGlobalConfigurationProtocol <NSObject>

@required

- (oneway void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getAccountFeatureSupportWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDAccountFeatureSupport *, NSError *, void*
- (void)getCloudSyncStateWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getModesCanImpactAvailabilityWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getPairSyncStateWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getPreventAutoReplyWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getStateDumpWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setCloudSyncPreferenceEnabled:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)setModesCanImpactAvailability:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)setPairSyncPreferenceEnabled:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)setPreventAutoReply:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
