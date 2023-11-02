
@interface PPLocalEventStore : NSObject <PPFeedbackAccepting> {
    _PASNotificationToken * _assetUpdateNotificationToken;
    _PASCoalescingTimer * _bufferedChanges;
    PPEventCache * _eventCache;
    _PASLock * _lock;
    PPEventStorage * _storage;
    PPTrialWrapper * _trialWrapper;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (bool)attemptToPurgeImmediately;
- (void)clearCaches;
- (id)customObjectForKey:(id)arg1 eventIdentifier:(id)arg2;
- (void)enumerateEventsFromEKObjectIDs:(id)arg1 expandingRecurrencesInRange:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3;
- (id)eventNameRecordsForClient:(id)arg1 error:(id*)arg2;
- (id)eventWithExternalID:(id)arg1;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventsFromDate:(id)arg1 toDate:(id)arg2;
- (id)init;
- (id)initWithTrialWrapper:(id)arg1 eventStorage:(id)arg2;
- (bool)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)nlEventsFromDate:(id)arg1 toDate:(id)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (void)runBlockWithPurgerDisabled:(id /* block */)arg1;
- (id)scoredEventsWithQuery:(id)arg1;

@end
