
@interface FCUserEventHistoryStorage : NSObject <FCUserEventHistoryStorageType> {
    unsigned long long  _currentSize;
    NFLazy * _lazyRootDirectory;
    FCUserEventHistoryMetadata * _metadata;
    NSHashTable * _observers;
    NSArray * _prunedSessionIDs;
    unsigned long long  _prunedSessionSize;
}

@property (nonatomic, readonly) NSURL *baseDirectoryURL;
@property (nonatomic) unsigned long long currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *earliestSessionDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFLazy *lazyRootDirectory;
@property (nonatomic, retain) FCUserEventHistoryMetadata *metadata;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) NSArray *prunedSessionIDs;
@property (nonatomic) unsigned long long prunedSessionSize;
@property (nonatomic, readonly) NSArray *sessionIDs;
@property (nonatomic, readonly) NSArray *sessions;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_deleteSessions:(id)arg1 pruned:(bool)arg2;
- (id)_filePathForSessionID:(id)arg1;
- (void)_pruneSessions:(id)arg1;
- (void)_pruneToMaxSessionAge:(unsigned long long)arg1;
- (void)_pruneToMaxSessionCount:(unsigned long long)arg1;
- (void)_pruneToMaxSize:(long long)arg1;
- (void)addObserver:(id)arg1;
- (id)baseDirectoryURL;
- (void)clearAllSessions;
- (void)clearHistory;
- (void)clearSessionsWithIDs:(id)arg1;
- (unsigned long long)currentSize;
- (id)earliestSessionDate;
- (id)initWithPrivateDataDirectory:(id)arg1;
- (id)lazyRootDirectory;
- (id)metadata;
- (id)observers;
- (id)pruneWithPolicies:(id)arg1;
- (id)prunedSessionIDs;
- (unsigned long long)prunedSessionSize;
- (void)removeObserver:(id)arg1;
- (id)rootDirectory;
- (id)sessionIDs;
- (id)sessions;
- (void)setCurrentSize:(unsigned long long)arg1;
- (void)setLazyRootDirectory:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataWithAggregateStoreGenerationTime:(long long)arg1 aggregateTotalCount:(long long)arg2 meanCountOfEvents:(double)arg3 standardDeviationOfEvents:(double)arg4 totalEventsCount:(long long)arg5 headlineEventCount:(long long)arg6 headlinesWithValidTitleEmbeddingsEventCount:(long long)arg7 headlinesWithInvalidTitleEmbeddingsEventCount:(long long)arg8 headlinesWithValidBodyEmbeddingsEventCount:(long long)arg9 headlinesWithInvalidBodyEmbeddingsEventCount:(long long)arg10;
- (void)setPrunedSessionIDs:(id)arg1;
- (void)setPrunedSessionSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)sizeString;
- (void)storeSessionID:(id)arg1 compressedSessionData:(id)arg2 notify:(bool)arg3;
- (void)storeSessionID:(id)arg1 sessionData:(id)arg2;
- (void)writeJSON:(id /* block */)arg1;

@end
