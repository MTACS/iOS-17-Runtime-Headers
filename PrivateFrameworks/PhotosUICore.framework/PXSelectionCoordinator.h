
@interface PXSelectionCoordinator : NSObject <PXChangeObserver, PXSectionedSelectionManagerSnapshotValidator> {
    long long  _currentlyMutatingObservationCount;
    PXSectionedSelectionManager * _currentlyMutatingSelectionManager;
    <PXSelectionCoordinatorDelegate> * _delegate;
    struct { 
        bool willUpdateSelectedObjects; 
        bool didUpdateSelectedObjects; 
        bool rejectedCountLimitViolation; 
        bool selectionLimitStatusChanged; 
    }  _delegateRespondsTo;
    NSMutableOrderedSet * _mutableSelectedObjectIDs;
    NSNumber * _selectionCountLimit;
    bool  _selectionLimitReached;
    NSMapTable * _stateByManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSelectionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableOrderedSet *mutableSelectedObjectIDs;
@property (nonatomic, readonly) NSOrderedSet *selectedObjectIDs;
@property (nonatomic, retain) NSNumber *selectionCountLimit;
@property (nonatomic) bool selectionLimitReached;
@property (nonatomic, readonly) NSMapTable *stateByManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDataSourceChangeToSelectionManager:(id)arg1 state:(id)arg2;
- (void)_handleSelectionChangeToSelectionManager:(id)arg1 state:(id)arg2;
- (void)_modifySelectionWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 originatingSelectionManager:(id)arg3;
- (void)_performChangesToCoordinatedSelectionManagersWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 originatingSelectionManager:(id)arg3;
- (void)_startMutatingSelectionManager:(id)arg1;
- (void)_stopMutatingSelectionManager:(id)arg1;
- (void)_updateSelectionLimitReached;
- (void)_updateSelectionManagerToGlobalState:(id)arg1 managerState:(id)arg2;
- (void)checkInSelectionManager:(id)arg1;
- (id)checkOutSelectionManagerForDataSourceManager:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithSelectedOIDs:(id)arg1;
- (void)modifySelectionWithOrder:(id)arg1;
- (bool)modifySelectionWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2;
- (id)mutableSelectedObjectIDs;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)selectedObjectIDs;
- (id)selectionCountLimit;
- (bool)selectionLimitReached;
- (id)selectionManager:(id)arg1 validateSnapshot:(id)arg2;
- (bool)selectionManagerShouldAvoidEmptySelection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectionCountLimit:(id)arg1;
- (void)setSelectionLimitReached:(bool)arg1;
- (id)stateByManager;
- (bool)test_validateInternalState;

@end
