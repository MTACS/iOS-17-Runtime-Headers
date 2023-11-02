
@interface _CNContactsLogger : NSObject <CNContactsLogger> {
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
- (void)XPCConnectionWasInterrupted;
- (void)XPCConnectionWasInvalidated;
- (void)_commonFetchContactsMatchingPredicate:(id)arg1 fetchType:(const char *)arg2 unifyResults:(bool)arg3 keysToFetch:(id)arg4;
- (void)accessAuthorizationStatusWasDenied;
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)applyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3;
- (void)changedMeContact:(id)arg1;
- (void)changingMeContact:(id /* block */)arg1;
- (void)clearingChangeHistory:(id /* block */)arg1;
- (void)contactsAccessWasDeniedWithError:(id)arg1;
- (void)contactsAccessWasGranted;
- (void)deleteImageRecentsMetadataRequestFailed:(id)arg1;
- (void)deletePosterRecentsMetadataRequestFailed:(id)arg1;
- (void)deletingContact:(id)arg1;
- (void)didFetchContacts:(id)arg1 error:(id)arg2;
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;
- (void)errorWhenQueryingTetheredSyncData:(id)arg1;
- (void)failedToApplyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3 error:(id)arg4;
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3;
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3;
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3;
- (void)fetchingChangeHistory:(id /* block */)arg1;
- (void)fetchingContactCount:(id /* block */)arg1;
- (void)fetchingContactIdentifierWithMatchingDictionary:(id /* block */)arg1;
- (void)fetchingContactSectionCounts:(id /* block */)arg1;
- (void)fetchingContactWithUserActivity:(id /* block */)arg1;
- (void)fetchingContacts:(id /* block */)arg1;
- (void)fetchingContactsBatch:(id /* block */)arg1;
- (void)fetchingContainers:(id /* block */)arg1;
- (void)fetchingDefaultContainerIdentifier:(id /* block */)arg1;
- (void)fetchingGroups:(id /* block */)arg1;
- (void)fetchingMeContactIdentifier:(id /* block */)arg1;
- (id)init;
- (void)internalError:(id)arg1;
- (id)log;
- (void)postingNotification:(id /* block */)arg1;
- (void)postingNotificationWithName:(id)arg1;
- (void)registeringForChangeHistory:(id /* block */)arg1;
- (void)removeContactImageData;
- (void)requestAuthorizationWasDenied;
- (void)requestingAccessForContacts:(id /* block */)arg1;
- (void)requestingExtensionCommand:(id /* block */)arg1;
- (void)resettingSortDataIfNeeded:(id /* block */)arg1;
- (void)saveRequestFailed:(id)arg1;
- (void)saveRequestInvalid:(id)arg1;
- (void)saving:(id /* block */)arg1;
- (void)serviceError:(id)arg1;
- (void)servicingContactsRequest:(id /* block */)arg1;
- (void)setContactImageData:(id)arg1;
- (void)setContactImageData:(id)arg1 format:(const char *)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setContactImageDataZeroCropRect:(id)arg1 format:(const char *)arg2;
- (void)settingDefaultAccount:(id /* block */)arg1;
- (void)unregisteringForChangeHistory:(id /* block */)arg1;
- (void)updatingContact:(id)arg1;

@end
