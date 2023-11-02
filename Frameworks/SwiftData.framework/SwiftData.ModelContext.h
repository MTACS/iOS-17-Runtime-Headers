
@interface SwiftData.ModelContext : _TtCs12_SwiftObject {
    void MAX_TIME;
    void _changedObjects;
    void _container;
    void _deferredInsertsPendingNotification;
    void _deferredMergeChangesNotification;
    void _deletedObjects;
    void _exhaustiveValidation;
    void _generatedMutatedIDsNotification;
    void _hasChanges;
    void _hasDeletes;
    void _hasInserts;
    void _hasUnprocessedDeletes;
    void _hasUnprocessedInserts;
    void _hasUpdates;
    void _ignoreChangeNotification;
    void _ignoreUndoCheckpoints;
    void _insertedObjects;
    void _lockedObjects;
    void _nsContext;
    void _processingChanges;
    void _propagatesDeletesAtEndOfEvent;
    void _propagatingDeletes;
    void _refreshedObjects;
    void _registeredForCallback;
    void _registeredUndoTransactionID;
    void _runLoopObserver;
    void _tombstonedObjectIDs;
    void _undoTransactionID;
    void _unprocessedChanges;
    void _unprocessedChangesPending;
    void _unprocessedDeletes;
    void _unprocessedInserts;
    void autosaveEnabled;
    void contextChanged;
    void firstAutosaveTimerCheck;
    void hasAutosaveObservers;
    void objectRegistration;
    void timer;
    void undoManager;
}

- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_observeContainerChanges:(id)arg1;
- (void)_observeNSContextChanges:(id)arg1;
- (void)_processChangedManagedObjectIDs:(id)arg1;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (void)autosave;
- (void)checkAutosaveConditionsWithDelay:(double)arg1;

@end
