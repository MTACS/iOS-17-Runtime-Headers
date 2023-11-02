
@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {
    PPContactStorage * _contactStorage;
    PPLocalNamedEntityStore * _namedEntityStore;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_incompleteContactFromContactsRecord:(id)arg1;
- (id)_scoredContactFromContactsRecord:(id)arg1 score:(double)arg2;
- (id)cachedSignificantContactHandles;
- (bool)chineseBirthdayFound;
- (void)clearChangeHistoryForClient:(id)arg1 historyResult:(id)arg2;
- (id)contactHandlesForSource:(id)arg1 error:(id*)arg2;
- (id)contactHandlesForTopics:(id)arg1 error:(id*)arg2;
- (id)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2;
- (id)contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2;
- (id)contactsWithQuery:(id)arg1 error:(id*)arg2;
- (id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(id)arg3 error:(id*)arg4;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2;
- (id)init;
- (id)initWithStorage:(id)arg1 namedEntityStoreOverride:(id)arg2;
- (bool)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)meCard;
- (id)rankedContactsWithQuery:(id)arg1 error:(id*)arg2;
- (void)rebuildCachedSignificantContactHandlesWithShouldContinue:(id /* block */)arg1;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)resolveContactsForNamedEntities:(id)arg1;
- (id)scoredContactsWithContacts:(id)arg1;
- (double)similarityForNamedEntity:(id)arg1 nameRecord:(id)arg2;
- (id)upcomingRelevantContactsForQuery:(id)arg1 error:(id*)arg2;

@end
