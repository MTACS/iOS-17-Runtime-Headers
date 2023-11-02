
@interface IMPinnedConversationsController : NSObject {
    NSDictionary * _chatMetadata;
    NSUbiquitousKeyValueStore * _dataStore;
    bool  _hasCompletedInitialization;
    bool  _hasDefferedPinnedConversationsDidChangeNotification;
    long long  _numberOfPendingForceSyncs;
    NSOrderedSet * _pinnedConversationIdentifierSet;
}

@property (nonatomic, retain) NSDictionary *chatMetadata;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *dataStore;
@property (nonatomic) bool hasCompletedInitialization;
@property (nonatomic) bool hasDefferedPinnedConversationsDidChangeNotification;
@property (nonatomic) long long numberOfPendingForceSyncs;
@property (nonatomic, retain) NSOrderedSet *pinnedConversationIdentifierSet;

+ (id)_forceSyncDispatchQueue;
+ (id)_ubiquitousDispatchQueue;
+ (long long)currentPinConfigurationRevision;
+ (long long)currentPinConfigurationVersion;
+ (unsigned long long)maximumNumberOfPinnedConversations;
+ (id)pinConfigurationMigrationKey;
+ (bool)processSupportsPinnedConversations;
+ (id)requiredKeys;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_dictionaryWithPinnedConversationIdentifiers:(id)arg1 chatMetadata:(id)arg2 updateReason:(id)arg3 timestamp:(id)arg4;
- (void)_fetchUbiquitousPinConfiguration:(id /* block */)arg1;
- (void)_handleChatGroupIDDidChangeNotification:(id)arg1;
- (id)_locallyStoredPinConfiguration;
- (id)_metadataDictionaryForChat:(id)arg1;
- (void)_postDeferredPinnedConversationsDidChangeNotificationIfNecessary;
- (void)_postPinnedConversationsDidChangeNotification;
- (void)_setPinnedConversationIdentifiers:(id)arg1 withChatMetadata:(id)arg2 updateReason:(id)arg3 shouldUpdateStores:(bool)arg4;
- (id)_ubiquitousPinConfigurationInStore:(id)arg1;
- (bool)_updateLocalStoreWithPinConfiguration:(id)arg1;
- (void)_updateUbiquitousStoreWithPinConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)chatMetadata;
- (id)chatMetadataFromPinConfiguration:(id)arg1;
- (void)conversationWasDeletedWithIdentifier:(id)arg1;
- (void)conversationsWereDeletedWithIdentifiers:(id)arg1;
- (id)dataStore;
- (id)dictionaryWithPinnedConversationIdentifiers:(id)arg1 chatMetadata:(id)arg2 updateReason:(id)arg3;
- (void)fetchMostUpToDatePinConfiguration:(id /* block */)arg1;
- (void)fetchPinnedConversationIdentifiersFromLocalStore;
- (void)forceSynchronizeUbiquitousStore;
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)arg1;
- (bool)hasCompletedInitialization;
- (bool)hasDefferedPinnedConversationsDidChangeNotification;
- (void)imCloudKitHooksSetEnabledDidReturn:(id)arg1;
- (id)init;
- (id)matchingIdentifierForChat:(id)arg1;
- (id)matchingIdentifierForChat:(id)arg1 inIdentifierSet:(id)arg2 withMetadata:(id)arg3;
- (id)mostUpToDatePinConfigurationByComparingPinConfiguration:(id)arg1 toOtherPinConfiguration:(id)arg2;
- (long long)numberOfPendingForceSyncs;
- (void)performPinConfigValidationAndMigrationIfNecessary;
- (bool)pinConfigurationHasCompatibleVersion:(id)arg1;
- (bool)pinConfigurationHasCurrentVersion:(id)arg1;
- (bool)pinConfigurationIsValid:(id)arg1;
- (unsigned long long)pinIndexForChat:(id)arg1 inIdentifierSet:(id)arg2 withMetadata:(id)arg3;
- (id)pinnedConversationIdentifierSet;
- (id)pinnedConversationIdentifiers;
- (id)pinnedConversationIdentifiersFromPinConfiguration:(id)arg1;
- (bool)pinnedConversationsContainsChat:(id)arg1;
- (void)setChatMetadata:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setHasCompletedInitialization:(bool)arg1;
- (void)setHasDefferedPinnedConversationsDidChangeNotification:(bool)arg1;
- (void)setNumberOfPendingForceSyncs:(long long)arg1;
- (void)setPinnedChats:(id)arg1 withUpdateReason:(id)arg2;
- (void)setPinnedConversationIdentifierSet:(id)arg1;
- (bool)shouldSync;
- (bool)shouldUpdateExistingPinConfig:(id)arg1 withProposedPinConfig:(id)arg2;
- (bool)shouldWriteProposedPinConfiguration:(id)arg1 toUbiquitousStoreWithExistingPinConfiguration:(id)arg2;
- (void)synchronizeLocalDataStore;
- (void)updateStoresWithPinConfiguration:(id)arg1;
- (id)validatedPinConfigurationWithCurrentVersionForPinConfiguration:(id)arg1;

@end
