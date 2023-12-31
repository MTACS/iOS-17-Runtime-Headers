
@interface EDHeuristicsMailboxPredictor : NSObject <EDMailboxPredictor> {
    <EDMailboxPredictionQueryAdapter> * _library;
    NSCache * _mailboxIDCache;
    NSDictionary * _parameters;
    <EMUserProfileProvider> * _userProfileProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <EDMailboxPredictionQueryAdapter> *library;
@property (nonatomic, retain) NSCache *mailboxIDCache;
@property (nonatomic, retain) NSDictionary *parameters;
@property (readonly) Class superclass;
@property (nonatomic, retain) <EMUserProfileProvider> *userProfileProvider;

- (void).cxx_destruct;
- (id)_allowedRecipientsForMessage:(id)arg1;
- (id)_conversationIDCountsForMessage:(id)arg1;
- (id)_countsForField:(id)arg1 message:(id)arg2;
- (id)_groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (bool)_isAllowedRecipient:(id)arg1;
- (bool)_limitToRecents;
- (id)_listIDCountsForMessage:(id)arg1;
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;
- (bool)_modeParameterIs:(id)arg1;
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;
- (id)_orderedModePredictionForMessage:(id)arg1;
- (id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_recipientCountsForMessage:(id)arg1;
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;
- (id)_senderCountsForMessage:(id)arg1;
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1;
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;
- (id)_userCreatedMailboxIDs;
- (id)_weightedModePredictionsForMessage:(id)arg1;
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2;
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2 parameters:(id)arg3;
- (id)library;
- (id)mailboxIDCache;
- (id)parameters;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2;
- (void)setLibrary:(id)arg1;
- (void)setMailboxIDCache:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setUserProfileProvider:(id)arg1;
- (id)userProfileProvider;

@end
