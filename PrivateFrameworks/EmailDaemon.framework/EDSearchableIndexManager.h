
@interface EDSearchableIndexManager : NSObject <EDMessageChangeHookResponder, EFLoggable> {
    EDPersistenceDatabase * _database;
    EDSearchableIndexDiagnosticsController * _diagnosticsController;
    bool  _needsReindex;
    bool  _needsToScheduleRecurringActivity;
    <EFCancelable> * _turboModeObservationToken;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EDSearchableIndexDiagnosticsController *diagnosticsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDSearchableIndex *index;
@property (nonatomic) bool needsReindex;
@property (nonatomic) bool needsToScheduleRecurringActivity;
@property (nonatomic, readonly) EDSearchableIndexPersistence *persistence;
@property (nonatomic, readonly) EDSearchableIndexScheduler *scheduler;
@property (readonly) Class superclass;
@property (nonatomic, retain) <EFCancelable> *turboModeObservationToken;

+ (id)log;

- (void).cxx_destruct;
- (void)_removeAllItemsFromIndexAndWait:(bool)arg1 options:(unsigned long long)arg2;
- (void)_removeItemsForPersistedMessages:(id)arg1;
- (void)_startObservingTurboModeToggle;
- (id)database;
- (id)diagnosticsController;
- (void)enableIndexingAndBeginScheduling:(bool)arg1;
- (void)enableIndexingAndBeginScheduling:(bool)arg1 budgetConfiguration:(id)arg2;
- (id)index;
- (id)initWithDatabase:(id)arg1 messagePersistence:(id)arg2 richLinkPersistence:(id)arg3 hookResponder:(id)arg4;
- (bool)needsReindex;
- (bool)needsToScheduleRecurringActivity;
- (id)persistence;
- (void)persistenceDidAddDataDetectionResults:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidUpdateData:(id)arg1 message:(id)arg2;
- (void)persistenceWillBeginUpdates;
- (void)removeAllItemsFromIndexAndWait:(bool)arg1 skipInvalidation:(bool)arg2;
- (void)scheduleRecurringActivity;
- (id)scheduler;
- (void)setDiagnosticsController:(id)arg1;
- (void)setNeedsReindex;
- (void)setNeedsReindex:(bool)arg1;
- (void)setNeedsToScheduleRecurringActivity:(bool)arg1;
- (void)setTurboModeObservationToken:(id)arg1;
- (void)test_tearDown;
- (id)turboModeObservationToken;

@end
