
@protocol CNContactsLogger <NSObject>

@required

- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
- (void)XPCConnectionWasInterrupted;
- (void)XPCConnectionWasInvalidated;
- (void)accessAuthorizationStatusWasDenied;
- (void)addingContacts:(NSArray *)arg1 toContainerWithIdentifier:(NSString *)arg2;
- (void)applyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(NSString *)arg3;
- (void)changedMeContact:(CNContact *)arg1;
- (void)changingMeContact:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)clearingChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)contactsAccessWasDeniedWithError:(NSError *)arg1;
- (void)contactsAccessWasGranted;
- (void)deleteImageRecentsMetadataRequestFailed:(NSError *)arg1;
- (void)deletePosterRecentsMetadataRequestFailed:(NSError *)arg1;
- (void)deletingContact:(CNContact *)arg1;
- (void)didFetchContacts:(NSArray *)arg1 error:(NSError *)arg2;
- (void)didFetchEncodedContacts:(NSData *)arg1 error:(NSError *)arg2;
- (void)errorWhenQueryingTetheredSyncData:(NSError *)arg1;
- (void)failedToApplyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(NSString *)arg3 error:(NSError *)arg4;
- (void)fetchContactsMatchingPredicate:(NSPredicate *)arg1 unifyResults:(bool)arg2 keysToFetch:(NSArray *)arg3;
- (void)fetchContactsProgressivelyMatchingPredicate:(NSPredicate *)arg1 unifyResults:(bool)arg2 keysToFetch:(NSArray *)arg3;
- (void)fetchEncodedContactsMatchingPredicate:(NSPredicate *)arg1 unifyResults:(bool)arg2 keysToFetch:(NSArray *)arg3;
- (void)fetchingChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactCount:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactIdentifierWithMatchingDictionary:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactSectionCounts:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactWithUserActivity:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContacts:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactsBatch:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContainers:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingDefaultContainerIdentifier:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingGroups:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingMeContactIdentifier:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)internalError:(NSError *)arg1;
- (void)postingNotification:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)postingNotificationWithName:(NSString *)arg1;
- (void)registeringForChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)removeContactImageData;
- (void)requestAuthorizationWasDenied;
- (void)requestingAccessForContacts:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)requestingExtensionCommand:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)resettingSortDataIfNeeded:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)saveRequestFailed:(NSError *)arg1;
- (void)saveRequestInvalid:(NSError *)arg1;
- (void)saving:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)serviceError:(NSError *)arg1;
- (void)servicingContactsRequest:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)setContactImageData:(NSData *)arg1;
- (void)setContactImageData:(NSData *)arg1 format:(const char *)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setContactImageDataZeroCropRect:(NSData *)arg1 format:(const char *)arg2;
- (void)settingDefaultAccount:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)unregisteringForChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)updatingContact:(CNContact *)arg1;

@end
