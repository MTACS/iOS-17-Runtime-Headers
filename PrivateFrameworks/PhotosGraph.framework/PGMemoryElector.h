
@interface PGMemoryElector : NSObject {
    CLSCurationContext * _curationContext;
    PGCurationManager * _curationManager;
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    PGRemoteConfiguration * _remoteConfiguration;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
}

+ (long long)compareMemoryCategoryForMemory:(id)arg1 toOtherMemory:(id)arg2;

- (void).cxx_destruct;
- (double)_contentScoreWeightForNewMemoryFocusWithCategory:(unsigned long long)arg1;
- (bool)_memoryContainsNegativeFeedbackPets:(id)arg1;
- (id)_requestedEnrichedMemoriesWithConfiguration:(id)arg1 graph:(id)arg2;
- (bool)_shouldCheckForSuggestionCollisionsForTriggeredMemory:(id)arg1;
- (id)electAndEnrichSortedTriggeredMemories:(id)arg1 alreadyEnrichedMemories:(id)arg2 targetNumberOfMemories:(unsigned long long)arg3 configuration:(id)arg4 graph:(id)arg5 planner:(id)arg6 context:(id)arg7 progressReporter:(id)arg8;
- (id)filterAndSortTriggeredMemories:(id)arg1 withPlanner:(id)arg2 context:(id)arg3 configuration:(id)arg4 progressReporter:(id)arg5;
- (id)generateEnrichedMemoriesWithConfiguration:(id)arg1 graph:(id)arg2 plannerPastSource:(id)arg3 plannerFutureSource:(id)arg4 progressReporter:(id)arg5;
- (id)generateEnrichedMemoriesWithConfiguration:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1 curationManager:(id)arg2 loggingConnection:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1 userFeedbackCalculator:(id)arg2 curationManager:(id)arg3 loggingConnection:(id)arg4;
- (void)persistEnrichedMemories:(id)arg1 pendingState:(unsigned short)arg2 graph:(id)arg3 progressReporter:(id)arg4;
- (unsigned long long)targetNumberOfMemoriesFromConfigurator:(id)arg1 graph:(id)arg2 context:(id)arg3;

@end
