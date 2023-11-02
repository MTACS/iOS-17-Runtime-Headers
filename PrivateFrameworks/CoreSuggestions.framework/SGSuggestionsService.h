
@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceDeliveriesProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceFidesProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceIpsosProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceRemindersProtocol, SGSuggestionsServiceURLsProtocol> {
    SGFuture * _daemonConnectionFuture;
    bool  _keepDirty;
    NSString * _machServiceName;
    <SGDSuggestManagerAllProtocol> * _managerForTesting;
    bool  _queuesRequestsIfBusy;
    SGFuture * _snapshotFuture;
    double  _syncTimeout;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _syncTimeoutLock;
}

+ (id)_daemonConnectionFutureForMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(bool)arg3;
+ (id)daemonConnections;
+ (bool)hasEntitlement:(id)arg1;
+ (id)inProcessSuggestManager;
+ (bool)isHarvestingSupported;
+ (void)prepareForQuery;
+ (id)serviceForContacts;
+ (id)serviceForDeliveries;
+ (id)serviceForEvents;
+ (id)serviceForFides;
+ (id)serviceForInternal;
+ (id)serviceForIpsos;
+ (id)serviceForMail;
+ (id)serviceForMessages;
+ (id)serviceForReminders;
+ (id)serviceForURLs;
+ (void)setInProcessSuggestManager:(id)arg1;

- (void).cxx_destruct;
- (void)_clearHarvestStoreCache;
- (int)_confirmRejectUI;
- (id)_daemonConnection;
- (id)_remoteSuggestionManager;
- (bool)addInteractions:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(id /* block */)arg3;
- (bool)addSearchableItems:(id)arg1 error:(id*)arg2;
- (void)addSearchableItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)allContactsLimitedTo:(unsigned long long)arg1 error:(id*)arg2;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)allContactsWithSnippets:(bool)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)allContactsWithSnippets:(bool)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)allDeliveriesWithLimit:(unsigned long long)arg1 error:(id*)arg2;
- (void)allDeliveriesWithLimit:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)allEventsLimitedTo:(unsigned long long)arg1 error:(id*)arg2;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)allRemindersLimitedTo:(unsigned long long)arg1 error:(id*)arg2;
- (void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)birthdayExtractionsForInterval:(id)arg1 error:(id*)arg2;
- (void)birthdayExtractionsForInterval:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)cacheSnapshotFuture;
- (id)celebrationExtractionsForInterval:(id)arg1 error:(id*)arg2;
- (void)celebrationExtractionsForInterval:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)clearCachesFully:(bool)arg1 error:(id*)arg2;
- (void)clearCachesFully:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)cnContactMatchesForRecordId:(id)arg1 error:(id*)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)cnContactMatchesForRecordIds:(id)arg1 error:(id*)arg2;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmContact:(id)arg1 error:(id*)arg2;
- (void)confirmContact:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmContactDetailRecord:(id)arg1 confirmationUI:(int)arg2 error:(id*)arg3;
- (void)confirmContactDetailRecord:(id)arg1 confirmationUI:(int)arg2 withCompletion:(id /* block */)arg3;
- (bool)confirmContactDetailRecord:(id)arg1 error:(id*)arg2;
- (void)confirmContactDetailRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmEvent:(id)arg1 error:(id*)arg2;
- (void)confirmEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmEventByRecordId:(id)arg1 error:(id*)arg2;
- (void)confirmEventByRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmRealtimeReminder:(id)arg1 error:(id*)arg2;
- (void)confirmRealtimeReminder:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmRecord:(id)arg1 error:(id*)arg2;
- (void)confirmRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmReminderByRecordId:(id)arg1 error:(id*)arg2;
- (void)confirmReminderByRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactFromRecordID:(id)arg1;
- (id)contactFromRecordID:(id)arg1 error:(id*)arg2;
- (void)contactFromRecordID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1;
- (id)contactMatchesByEmailAddress:(id)arg1 error:(id*)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1;
- (id)contactMatchesByPhoneNumber:(id)arg1 error:(id*)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesBySocialProfile:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (void)contactMatchesBySocialProfile:(id)arg1 bundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)contactMatchesBySocialProfile:(id)arg1 error:(id*)arg2;
- (void)contactMatchesBySocialProfile:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)daemonExit:(id*)arg1;
- (void)daemonExitWithCompletion:(id /* block */)arg1;
- (void)deleteCloudKitZoneWithCompletion:(id /* block */)arg1;
- (bool)deleteEventByRecordId:(id)arg1 error:(id*)arg2;
- (void)deleteEventByRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (bool)deregisterContactsChangeObserverWithToken:(id)arg1;
- (bool)deregisterEventsChangeObserverWithToken:(id)arg1;
- (id)dissectAttachmentsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)dissectAttachmentsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)emailAddressIsSignificant:(id)arg1 error:(id*)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)evaluateRecipe:(id)arg1 attachments:(id)arg2 completion:(id /* block */)arg3;
- (id)eventFromRecordID:(id)arg1 error:(id*)arg2;
- (void)eventFromRecordID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)eventFromUniqueId:(id)arg1 error:(id*)arg2;
- (void)eventFromUniqueId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(id /* block */)arg3;
- (id)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 error:(id*)arg3;
- (void)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 withCompletion:(id /* block */)arg3;
- (id)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id*)arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)identifyComposeWarningsFromSubject:(id)arg1 content:(id)arg2 attributes:(id)arg3 toRecipients:(id)arg4 ccRecipients:(id)arg5 bccRecipients:(id)arg6 originalToRecipients:(id)arg7 originalCcRecipients:(id)arg8 attachments:(id)arg9 error:(id*)arg10;
- (void)identifyComposeWarningsFromSubject:(id)arg1 content:(id)arg2 attributes:(id)arg3 toRecipients:(id)arg4 ccRecipients:(id)arg5 bccRecipients:(id)arg6 originalToRecipients:(id)arg7 originalCcRecipients:(id)arg8 attachments:(id)arg9 withCompletion:(id /* block */)arg10;
- (id)identifyFollowUpWarningFromSubject:(id)arg1 body:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (void)identifyFollowUpWarningFromSubject:(id)arg1 body:(id)arg2 date:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(bool)arg3;
- (id)interactionStoreLookupForDetail:(id)arg1 error:(id*)arg2;
- (void)interactionStoreLookupForDetail:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)ipsosMessagesFromSearchableItems:(id)arg1 error:(id*)arg2;
- (void)ipsosMessagesFromSearchableItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)isEnabledWithError:(id*)arg1;
- (void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 containsSchemaOrg:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)keepDirty:(bool)arg1;
- (void)keysForSchemas:(id)arg1 completion:(id /* block */)arg2;
- (bool)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 error:(id*)arg2;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 error:(id*)arg4;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1;
- (void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logSuggestionInteractionForRecordId:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (bool)logUserCreatedReminderTitle:(id)arg1 error:(id*)arg2;
- (void)logUserCreatedReminderTitle:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)messagesToRefreshWithCompletion:(id /* block */)arg1;
- (id)messagesToRefreshWithError:(id*)arg1;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 error:(id*)arg4;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 onlySignificant:(bool)arg4 error:(id*)arg5;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 onlySignificant:(bool)arg4 supportsInfoLookup:(bool)arg5 error:(id*)arg6;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 onlySignificant:(bool)arg4 supportsInfoLookup:(bool)arg5 withCompletion:(id /* block */)arg6;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 onlySignificant:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)namesForDetailCaches;
- (id)originFromRecordId:(id)arg1 error:(id*)arg2;
- (void)originFromRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)ping:(id*)arg1;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)planReceivedFromServerWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (id)powerState;
- (id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(id /* block */)arg6;
- (id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(id /* block */)arg6;
- (bool)prepareForRealtimeExtraction:(id*)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(id /* block */)arg1;
- (bool)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)arg1 toValues:(id)arg2 error:(id*)arg3;
- (void)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)arg1 toValues:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (bool)queuesRequestsIfBusy;
- (void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(id /* block */)arg5;
- (bool)rebuildNamesForDetailCache:(id*)arg1;
- (void)rebuildNamesForDetailCacheWithCompletion:(id /* block */)arg1;
- (id)recentURLsWithLimit:(unsigned int)arg1 error:(id*)arg2;
- (void)recentURLsWithLimit:(unsigned int)arg1 withCompletion:(id /* block */)arg2;
- (id)registerContactsChangeObserver:(id /* block */)arg1;
- (id)registerEventsChangeObserver:(id /* block */)arg1;
- (bool)registerURLFeedback:(unsigned char)arg1 absoluteURL:(id)arg2 error:(id*)arg3;
- (void)registerURLFeedback:(unsigned char)arg1 absoluteURL:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)rejectContact:(id)arg1 error:(id*)arg2;
- (bool)rejectContact:(id)arg1 rejectionUI:(int)arg2 error:(id*)arg3;
- (void)rejectContact:(id)arg1 rejectionUI:(int)arg2 withCompletion:(id /* block */)arg3;
- (void)rejectContact:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectContactDetailRecord:(id)arg1 error:(id*)arg2;
- (bool)rejectContactDetailRecord:(id)arg1 rejectionUI:(int)arg2 error:(id*)arg3;
- (void)rejectContactDetailRecord:(id)arg1 rejectionUI:(int)arg2 withCompletion:(id /* block */)arg3;
- (void)rejectContactDetailRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectEvent:(id)arg1 error:(id*)arg2;
- (void)rejectEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectEventByRecordId:(id)arg1 error:(id*)arg2;
- (void)rejectEventByRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectRealtimeReminder:(id)arg1 error:(id*)arg2;
- (void)rejectRealtimeReminder:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectRecord:(id)arg1 error:(id*)arg2;
- (bool)rejectRecord:(id)arg1 rejectionUI:(int)arg2 error:(id*)arg3;
- (void)rejectRecord:(id)arg1 rejectionUI:(int)arg2 withCompletion:(id /* block */)arg3;
- (void)rejectRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectReminderByRecordId:(id)arg1 error:(id*)arg2;
- (void)rejectReminderByRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)reminderAlarmTriggeredForRecordId:(id)arg1 error:(id*)arg2;
- (void)reminderAlarmTriggeredForRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)reminderTitleForContent:(id)arg1 error:(id*)arg2;
- (void)reminderTitleForContent:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)removeAllStoredPseudoContacts:(id*)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(id /* block */)arg1;
- (id)reportMailIntelligenceFollowUpUserEngagement:(long long)arg1 forStringFromFollowUpWarning:(id)arg2 error:(id*)arg3;
- (void)reportMailIntelligenceFollowUpUserEngagement:(long long)arg1 forStringFromFollowUpWarning:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id*)arg3;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)reportUserEngagement:(bool)arg1 forWarning:(id)arg2 error:(id*)arg3;
- (void)reportUserEngagement:(bool)arg1 forWarning:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)reportValue:(bool)arg1 forFeatureSetting:(long long)arg2 error:(id*)arg3;
- (void)reportValue:(bool)arg1 forFeatureSetting:(long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)resetConfirmationAndRejectionHistory:(id*)arg1;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(id /* block */)arg1;
- (bool)resolveFullDownloadRequests:(id)arg1 error:(id*)arg2;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)saliencyFromEmailHeaders:(id)arg1 error:(id*)arg2;
- (void)saliencyFromEmailHeaders:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)saliencyFromRFC822Data:(id)arg1 error:(id*)arg2;
- (void)saliencyFromRFC822Data:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)sendRTCLogs:(id*)arg1;
- (void)setManagerForTesting:(id)arg1;
- (void)setQueuesRequestsIfBusy:(bool)arg1;
- (void)setSyncTimeout:(double)arg1;
- (bool)sleep:(id*)arg1;
- (void)sleepWithCompletion:(id /* block */)arg1;
- (id)sortedSaliencyResultsRestrictedToMailboxTypes:(id)arg1 mailboxIds:(id)arg2 receivedOnOrAfter:(id)arg3 ascending:(bool)arg4 limit:(unsigned long long)arg5 error:(id*)arg6;
- (void)sortedSaliencyResultsRestrictedToMailboxTypes:(id)arg1 mailboxIds:(id)arg2 receivedOnOrAfter:(id)arg3 ascending:(bool)arg4 limit:(unsigned long long)arg5 withCompletion:(id /* block */)arg6;
- (id)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
- (void)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 limit:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 minCount:(unsigned long long)arg2 minScore:(double)arg3 limit:(unsigned long long)arg4 error:(id*)arg5;
- (void)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 minCount:(unsigned long long)arg2 minScore:(double)arg3 limit:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (bool)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5;
- (void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withCompletion:(id /* block */)arg5;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id*)arg2;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(id /* block */)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id*)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id*)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(id /* block */)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id*)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id*)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(id /* block */)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(id /* block */)arg4;
- (double)syncTimeout;
- (id)titleSuggestionForMessage:(id)arg1 error:(id*)arg2;
- (void)titleSuggestionForMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)topSalienciesForMailboxId:(id)arg1 limit:(long long)arg2 error:(id*)arg3;
- (void)topSalienciesForMailboxId:(id)arg1 limit:(long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id*)arg3;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 containingSubstring:(id)arg4 flagFilter:(unsigned char)arg5 limit:(unsigned int)arg6 error:(id*)arg7;
- (void)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 containingSubstring:(id)arg4 flagFilter:(unsigned char)arg5 limit:(unsigned int)arg6 withCompletion:(id /* block */)arg7;
- (id)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned int)arg4 error:(id*)arg5;
- (void)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned int)arg4 withCompletion:(id /* block */)arg5;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithCompletion:(id /* block */)arg2;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(id /* block */)arg3;

@end