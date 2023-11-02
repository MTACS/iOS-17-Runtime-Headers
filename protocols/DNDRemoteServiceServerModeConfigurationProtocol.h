
@protocol DNDRemoteServiceServerModeConfigurationProtocol <NSObject>

@required

- (void)getAllModesWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__DNDMode__> *, NSError *, void*
- (void)getAllowedModesForContactHandle:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDContactHandle *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__NSString__> *, NSError *, void*
- (void)getAvailableModesWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__DNDMode__> *, NSError *, void*
- (void)getModeConfigurationForModeIdentifier:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeConfiguration *, NSError *, void*
- (void)getModeConfigurationsWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__DNDModeConfiguration__> *, NSError *, void*
- (void)getSilencedModesForContactHandle:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDContactHandle *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__NSString__> *, NSError *, void*
- (void)getUserAvailabilityInActiveModeForContactHandle:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDContactHandle *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)publishStatusKitAvailabilityWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)removeModeConfigurationForModeIdentifier:(void *)arg1 deletePlaceholder:(void *)arg2 withRequestDetails:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSNumber *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)setModeConfiguration:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDModeConfiguration *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)syncModeConfigurationsWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
