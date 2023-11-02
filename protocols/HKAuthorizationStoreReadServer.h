
@protocol HKAuthorizationStoreReadServer <NSObject>

@required

- (void)remote_fetchAuthorizationContextForPromptSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectAuthorizationPromptSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKObjectAuthorizationPromptSessionContext *, NSError *, void*
- (void)remote_fetchAuthorizationRecordsForSourceBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_fetchAuthorizationRecordsForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_fetchAuthorizationStatusesForDocumentType:(void *)arg1 sourceBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKDocumentType *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_fetchAuthorizationStatusesForSampleUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_fetchSourcesRequestingAuthorizationForTypes:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)remote_validateRecalibrateEstimatesRequestRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKRecalibrateEstimatesRequestRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
