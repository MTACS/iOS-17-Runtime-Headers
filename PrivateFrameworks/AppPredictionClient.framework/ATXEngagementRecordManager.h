
@interface ATXEngagementRecordManager : NSObject <ATXEngagementRecordManagerProtocol> {
    ATXBiomeERMStream * _eventStream;
    double  _minDurationForTrackedReferencesToStayAround;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    ATXExecutableReferenceManager * _referenceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minDurationForTrackedReferencesToStayAround;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEngagedExcutableNoSync:(id)arg1 clientModelId:(id)arg2 type:(unsigned long long)arg3;
- (void)_addEngagedSuggestionNoSync:(id)arg1 type:(unsigned long long)arg2;
- (void)_addHiddenSuggestionNoSync:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;
- (id)_engagedEntriesNoSync;
- (id)_engagedEntriesNoSyncOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;
- (void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)arg1;
- (id)_identifiersFromEntries:(id)arg1;
- (void)_logDidAddEntryToBiomeStream:(id)arg1;
- (id)_readData;
- (unsigned long long)_referenceCountForExecutable:(id)arg1;
- (void)_removeEngagedSuggestionsIfPossibleNoSync;
- (void)_removeEngagementsOnQueuePassingTest:(id /* block */)arg1;
- (void)_serializeAndWriteNoSyncSet:(id)arg1;
- (bool)_writeData:(id)arg1;
- (void)addEngagedExecutable:(id)arg1 clientModelId:(id)arg2 engagementRecordType:(unsigned long long)arg3;
- (void)addEngagedSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2;
- (void)addHiddenSuggestion:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;
- (id)description;
- (id)engagedExecutablesOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;
- (void)fetchEngagedEntriesWithCompletionHandler:(id /* block */)arg1;
- (bool)hasEngagedWithExecutable:(id)arg1 engagedExecutables:(id)arg2;
- (bool)hasEngagedWithExecutable:(id)arg1 engagementRecordType:(unsigned long long)arg2;
- (bool)hasEngagedWithSuggestion:(id)arg1 engagedExecutables:(id)arg2;
- (bool)hasEngagedWithSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2;
- (bool)hasReferenceForSuggestion:(id)arg1;
- (id)init;
- (id)initWithCacheDirectory:(id)arg1;
- (id)jsonDict;
- (double)minDurationForTrackedReferencesToStayAround;
- (void)removeAllEngagementsForSuggestion:(id)arg1;
- (void)removeAllEngagementsOfRecordType:(unsigned long long)arg1;
- (void)removeAllEngagementsWithCompletion:(id /* block */)arg1;
- (void)removeEngagementForExecutableIdentifier:(id)arg1 recordType:(unsigned long long)arg2 abortingRemovalIfEngagementDateIsLaterThanDate:(id)arg3;
- (void)removeEngagementForSuggestion:(id)arg1 recordType:(unsigned long long)arg2;
- (void)setMinDurationForTrackedReferencesToStayAround:(double)arg1;
- (void)updateForClientModelCacheUpdate:(id)arg1 clientModelId:(id)arg2;

@end
