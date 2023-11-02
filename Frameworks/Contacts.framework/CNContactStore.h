
@interface CNContactStore : NSObject <CHContactDataSource, EFLoggable, IMAssistantContactsDataSource, TUContactProvider, TUContactsDataSource, TUConversationContactProvider, TUHandleContactProvider> {
    CNContainerCache * _containerCache;
}

@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (nonatomic, readonly, copy) CNResult *currentHistoryAnchor;
@property (nonatomic, readonly, copy) NSData *currentHistoryToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _EMContactsCache *em_cache;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNiOSAddressBookDataMapper *iOSMapper;
@property (readonly) Class superclass;
@property (readonly) bool supportsMatchingDictionaries;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id /* block */)IsSpotlightIndexingSupported;
+ (id)_contactStoreForPublicAddressBook:(void*)arg1;
+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (long long)authorizationStatusForEntityType:(long long)arg1 assumedIdentity:(id)arg2;
+ (id)contactIdentifierFromInternalIdentifier:(id)arg1;
+ (id)contactStoreForPublicAddressBook:(void*)arg1;
+ (bool)eraseAllDataAtLocationWithName:(id)arg1 error:(id*)arg2;
+ (bool)eraseAllDataAtURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)internalIdentifierFromContactIdentifier:(id)arg1;
+ (bool)isAccessRestrictedForEntityType:(long long)arg1;
+ (bool)isSharedNamePhotoEnabled;
+ (bool)isXPCDataMapperStore:(id)arg1;
+ (id)logSpotlight;
+ (id)standardLabelsForPropertyWithKey:(id)arg1;
+ (id)standardLabelsForPropertyWithKey:(id)arg1 options:(unsigned long long)arg2;
+ (Class)storeClassWithIdentifier:(id)arg1;
+ (id)storeForFamilyMember:(id)arg1;
+ (id)storeIdentifier;
+ (id)storeIdentifierFromContactIdentifier:(id)arg1;
+ (id)storeInfoClasses;
+ (id)storeWithDelegateInfo:(id)arg1;
+ (id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
+ (id)storeWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)_contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3 error:(id*)arg4;
- (id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1;
- (id)_ios_meContactIdentifierWithError:(id*)arg1;
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)_labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (void*)_publicABPersonFromContact:(id)arg1 publicAddressBook:(const void**)arg2;
- (int)_publicMultiValueIdentifierFromLabeledValue:(id)arg1;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)addressBook;
- (id)authorizedKeysForContactKeys:(id)arg1;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3;
- (id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactFromPerson:(void*)arg1;
- (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2;
- (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(bool)arg3;
- (id)contactFromPerson:(void*)arg1 mutable:(bool)arg2;
- (id)contactFromPersonID:(int)arg1;
- (id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2;
- (id)contactFromPublicPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactIdentifierFromPersonID:(int)arg1;
- (id)contactIdentifierFromPublicPersonID:(int)arg1;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(bool)arg2 keysToFetch:(id)arg3 error:(id*)arg4;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)currentHistoryAnchor;
- (id)currentHistoryToken;
- (id)defaultContainerIdentifier;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)descriptorForRequiredKeysForUserActivityUserInfo;
- (bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id*)arg2;
- (id)enumeratorForContactFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2;
- (id)executeFetchRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
- (id)groupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)hasAccountFirstSyncCompleted;
- (bool)hasGroups;
- (bool)hasMultipleGroupsOrAccounts;
- (id)iOSMapper;
- (id)identifierWithError:(id*)arg1;
- (id)individualContactCountWithError:(id*)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 managedConfiguration:(id)arg3;
- (bool)isSpotlightIndexingSupported;
- (id)labeledValueFromMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)mainContactStore;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)meContactIdentifiers:(id*)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4;
- (int)multiValueIdentifierFromLabeledValue:(id)arg1;
- (id)originForSuggestion:(id)arg1 error:(id*)arg2;
- (void*)personFromContact:(id)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)policyWithDescription:(id)arg1 error:(id*)arg2;
- (void*)publicABPersonFromContact:(id)arg1 publicAddressBook:(const void**)arg2;
- (int)publicMultiValueIdentifierFromLabeledValue:(id)arg1;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (id)requestAccessForEntityType:(long long)arg1;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestAuthorization:(long long)arg1 entityType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)requestExtensionCommand:(id)arg1 error:(id*)arg2;
- (bool)resetSortDataIfNeededWithError:(id*)arg1;
- (int)saveSequenceCount;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (bool)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2;
- (bool)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)supportsMatchingDictionaries;
- (bool)supportsSaveRequest:(id)arg1;
- (id)synchronousRemoteObjectProxyForContactsXPCService;
- (id)unifiedContactCountWithError:(id*)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)verifyIndexWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory

- (id)contactsByContactHandleForContactHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/ContactsAssistantServices.framework/ContactsAssistantServices

- (id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (id)contactsByContactHandleForContactHandles:(id)arg1 keyDescriptors:(id)arg2;
- (id)contactsByHandleForHandles:(id)arg1 keyDescriptors:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (id)ds_meContactIdentifier;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (id)fetchContactsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)sanitizeContacts:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (id)em_authorizedContactStore;
+ (id)log;

- (id)_allContactsForEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)_allContactsForName:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)_bestContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 allowMatchOnDisplayName:(bool)arg3 error:(id*)arg4;
- (id)_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 allowMatchOnDisplayName:(bool)arg3 createIfNeeded:(bool)arg4 error:(id*)arg5;
- (id)allContactEmailAddressesWithError:(id*)arg1;
- (id)em_cache;
- (id)em_contactsFutureOnScheduler:(id)arg1 forEmailAddresses:(id)arg2 keysToFetch:(id)arg3;
- (id)em_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 allowMatchOnDisplayName:(bool)arg3 createIfNeeded:(bool)arg4;
- (id)em_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 createIfNeeded:(bool)arg3;
- (id)em_onScheduler:(id)arg1 contactFutureForEmailAddress:(id)arg2 keysToFetch:(id)arg3;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)_healthAppTCCIdentity;
+ (long long)hd_authorizationStatusForHealthApp;
+ (id)hd_contactStoreWithHealthAppIdentity;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (bool)_maps_isAuthorised;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)ic_existingOrNewContactFromParticipant:(id)arg1 keysToFetch:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_allContactIDsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;
- (id)allContactIDsMatchingEmailAddress:(id)arg1;
- (id)allContactIDsMatchingEmailAddress:(id)arg1 orPhoneNumber:(id)arg2;
- (id)contactsMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsMatchingPhoneNumber:(id)arg1 keysToFetch:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SeymourClient.framework/SeymourClient

- (id)smu_meContactWithKeysToFetch:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

+ (id)nph_shared;
+ (id)nph_shared_with_nanophone_identity;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (long long)tu_authorizationStatus;
+ (id)tu_contactStore;
+ (bool)tu_isAuthorized;

- (id)contactForDestinationId:(id)arg1;
- (id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForIdentifier:(id)arg1;
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2 usingCache:(id)arg3;
- (id)tu_contactsByContactHandleForContactHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)tu_contactsByConversationMemberForConversationMembers:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)tu_contactsByHandleForHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)tu_contactsByRemoteConversationMemberForConversations:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)tu_contactsForContactHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)tu_contactsForHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)tu_enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id*)arg2;

@end
