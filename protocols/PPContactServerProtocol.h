
@protocol PPContactServerProtocol <PPFeedbackAccepting>

@required

- (void)contactHandlesForSource:(PPSource *)arg1 queryId:(unsigned long long)arg2;
- (void)contactHandlesForTopics:(NSArray *)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordChangesForClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PPContactNameRecordChangeResult *, NSError *, void*
- (void)contactNameRecordChangesForClient:(NSString *)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordsForClient:(NSString *)arg1 queryId:(unsigned long long)arg2;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(void *)arg1 chosenContactIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rankedContactsWithQuery:(PPContactQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)upcomingRelevantContactsForQuery:(PPFuzzyContactQuery *)arg1 queryId:(unsigned long long)arg2;

@end
