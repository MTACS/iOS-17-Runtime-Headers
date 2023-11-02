
@interface CUIKEditingManager : NSObject {
    NSMutableDictionary * _changeHistory;
    EKChangeListener * _changeListener;
    NSMutableDictionary * _changedObjectMap;
    NSMutableSet * _editingContextGroups;
    EKEventStore * _eventStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSMutableDictionary *changeHistory;
@property (retain) EKChangeListener *changeListener;
@property (retain) NSMutableDictionary *changedObjectMap;
@property (retain) NSMutableSet *editingContextGroups;
@property EKEventStore *eventStore;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_addContextToNewOrExistingGroup:(id)arg1;
- (id)_allOpenEditingContexts;
- (bool)_changesExistForObject:(id)arg1;
- (bool)_closeEditingContext:(id)arg1 forceCommit:(bool)arg2 forceDontCommit:(bool)arg3 shouldClose:(bool*)arg4;
- (bool)_commitChangesForContext:(id)arg1 forceCommit:(bool)arg2 shouldClose:(bool*)arg3;
- (id)_liveEditedObjectsMatchingPredicate:(id)arg1 notInSet:(id)arg2;
- (bool)_objectsSupportEditingContexts:(id)arg1;
- (id)_objectsWithLiveEdits:(id)arg1 matchingPredicate:(id)arg2;
- (id)_openEditingContextWithObjects:(id)arg1 interfaceType:(unsigned long long)arg2 observer:(id)arg3;
- (void)applyLiveChangesToObject:(id)arg1;
- (void)applyLiveChangesToObjects:(id)arg1;
- (id)changeHistory;
- (id)changeListener;
- (id)changedObjectMap;
- (id)changedObjectsCopy;
- (void)clearAllLiveChanges;
- (void)clearLiveChangesForObjects:(id)arg1;
- (bool)closeEditingContext:(id)arg1;
- (bool)closeEditingContext:(id)arg1 shouldClose:(bool*)arg2;
- (bool)closeEditingContextAndCommitChanges:(id)arg1;
- (bool)closeEditingContextWithoutCommittingChanges:(id)arg1;
- (bool)commitChangesFromEditingContextWithoutClosing:(id)arg1;
- (id)editingContextGroups;
- (id)eventStore;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventsMatchingPredicate:(id)arg1;
- (id)eventsWithExternalIdentifier:(id)arg1;
- (id)eventsWithIdentifiers:(id)arg1;
- (void)fetchEventsMatchingPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRemindersMatchingPredicate:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithEventStore:(id)arg1;
- (id)openEditingContextWithObject:(id)arg1 interfaceType:(unsigned long long)arg2;
- (id)openEditingContextWithObject:(id)arg1 interfaceType:(unsigned long long)arg2 observer:(id)arg3;
- (id)openEditingContextWithObjects:(id)arg1 interfaceType:(unsigned long long)arg2;
- (id)openEditingContextWithObjects:(id)arg1 interfaceType:(unsigned long long)arg2 observer:(id)arg3;
- (void)partialSaveObject:(id)arg1;
- (id)queue;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1;
- (void)setChangeHistory:(id)arg1;
- (void)setChangeListener:(id)arg1;
- (void)setChangedObjectMap:(id)arg1;
- (void)setEditingContextGroups:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setQueue:(id)arg1;

@end
