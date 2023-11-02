
@interface PLJournalManager : PLJournalManagerCore {
    NSPersistentHistoryToken * _currentHistoryToken;
    _Atomic bool  _ignoreHistoryDuringSnapshot;
}

+ (id)journalManagerWithClass:(Class)arg1 libraryServiceManager:(id)arg2;

- (void).cxx_destruct;
- (bool)_enumerateJournalEntriesFromHistoryToken:(id)arg1 latestHistoryToken:(id*)arg2 withManagedObjectContext:(id)arg3 journalEntryBlock:(id /* block */)arg4 shouldStopBlock:(id /* block */)arg5 error:(id*)arg6;
- (id)_existingObjectWithID:(id)arg1 managedObjectContext:(id)arg2;
- (void)_loadHistoryTokenIfNecessary;
- (bool)_needsFullSnapshot;
- (bool)_needsPartialSnapshot:(id)arg1;
- (void)clearHistoryToken;
- (void)clearIgnoreHistoryDuringSnapshot;
- (bool)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 error:(id*)arg3;
- (id)currentHistoryToken;
- (bool)needsSnapshot;
- (bool)performFullSnapshotAppend:(bool)arg1 createOnlyIfNecessary:(bool)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;
- (bool)performPartialSnapshotForPayloadClassIDs:(id)arg1 append:(bool)arg2 createOnlyIfNecessary:(bool)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5;
- (bool)performSnapshotIfNecessaryAppend:(bool)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3;
- (bool)replayFromCurrentHistoryTokenWithManagedObjectContext:(id)arg1 updatedPayloadClassIDs:(id)arg2 error:(id*)arg3;
- (void)setIgnoreHistoryDuringSnapshot;

@end
