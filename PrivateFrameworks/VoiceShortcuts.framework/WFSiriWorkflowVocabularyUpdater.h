
@interface WFSiriWorkflowVocabularyUpdater : NSObject <WFDatabaseObjectObserver> {
    <WFDatabaseProvider> * _databaseProvider;
    WFDebouncer * _debouncer;
    NSObject<OS_dispatch_queue> * _queue;
    NSOrderedSet * _speakableStrings;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) WFDebouncer *debouncer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSOrderedSet *speakableStrings;

- (void).cxx_destruct;
- (void)applicationWasRegistered:(id)arg1;
- (void)assistantPreferencesDidChange;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)databaseProvider;
- (id)debouncer;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (id)queue;
- (void)queue_startIfPossible;
- (void)queue_updateIfNeeded;
- (void)setSpeakableStrings:(id)arg1;
- (id)speakableStrings;
- (void)startIfPossible;
- (void)updateIfPossible;

@end
