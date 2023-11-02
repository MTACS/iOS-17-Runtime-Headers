
@interface HomeKitEvents.QueryLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void cancelled;
    void ckQueryCancelled;
    void ckQueryDroppedEvents;
    void ckQueryEncounteredError;
    void ckQueryExecutionEndTimeMs;
    void ckQueryExecutionStartTimeMs;
    void ckQueryReachedLimit;
    void ckQueryResultNotHandled;
    void ckQueryResultProcessingEncounteredError;
    void ckQueryTerminatedStream;
    void coreAnalyticsEventName;
    void coreAnalyticsEventOptions;
    void limit;
    void numCKQueries;
    void numCKQueriesSucceeded;
    void numEmittedEvents;
    void numEventsSavedToCache;
    void numFetchedCKRecords;
    void numIgnoredExpiredRecords;
    void numIgnoredNoCreationDateRecords;
    void numIgnoredNonUUIDNameRecords;
    void numProcessedEvents;
    void processingDroppedEvents;
    void processingEncounteredError;
    void processingReachedLimit;
    void processingResultNotHandled;
    void processingTerminatedStream;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  queryEndDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  queryStartDate;
    void queryType;
    void scope;
    void succeeded;
    void totalCKRecordSize;
}

@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)init;

@end
