
@interface PPContactStore : NSObject <PPClientStore, PPFeedbackAccepting> {
    PPClientFeedbackHelper * _clientFeedbackHelper;
    PPRecordMonitoringHelper * _monitoringHelper;
}

@property (nonatomic, retain) NSString *clientIdentifier;

- (void).cxx_destruct;
- (void)_loadContactNameRecordsWithDelegate:(id)arg1;
- (id /* block */)_recordGenerator;
- (void)_sendChangesToDelegates;
- (id)contactHandlesForSource:(id)arg1 error:(id*)arg2;
- (id)contactHandlesForTopics:(id)arg1 error:(id*)arg2;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (bool)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedContactsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)upcomingRelevantContactsForQuery:(id)arg1 error:(id*)arg2;

@end
