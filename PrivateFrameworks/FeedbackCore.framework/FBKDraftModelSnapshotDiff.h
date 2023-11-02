
@interface FBKDraftModelSnapshotDiff : NSObject {
    FBKDraftModelSnapshot * _currentSnapshot;
    FBKDraftModelSnapshot * _previousSnapshot;
}

@property (nonatomic, readonly) NSArray *addedRows;
@property (nonatomic, readonly) NSArray *addedSections;
@property (nonatomic, readonly) bool containsAnyAdditionsOrRemovals;
@property (nonatomic, retain) FBKDraftModelSnapshot *currentSnapshot;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) bool hasRemovedAllDevices;
@property (nonatomic, retain) FBKDraftModelSnapshot *previousSnapshot;
@property (nonatomic, readonly) NSArray *removedRows;
@property (nonatomic, readonly) NSArray *removedSections;

- (void).cxx_destruct;
- (id)addedRows;
- (id)addedSections;
- (bool)containsAnyAdditionsOrRemovals;
- (id)currentSnapshot;
- (id)description;
- (id)descriptionString;
- (bool)hasRemovedAllDevices;
- (unsigned long long)indexOfRowInNewSnapshot:(id)arg1;
- (unsigned long long)indexOfSectionInNewSnapshot:(id)arg1;
- (id)initWithPreviousSnapshot:(id)arg1 newSnapshot:(id)arg2;
- (id)previousSnapshot;
- (id)removedRows;
- (id)removedSections;
- (void)setCurrentSnapshot:(id)arg1;
- (void)setPreviousSnapshot:(id)arg1;

@end
