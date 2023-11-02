
@interface ICASCollabNotesItemData : NSObject <AADataEventType> {
    NSNumber * _totalNotesCollabRootOwnedCount;
    NSNumber * _totalNotesCollabRootReadOnlyCount;
    NSNumber * _totalNotesCollabRootReadWriteJoinedCount;
    NSNumber * _totalNotesCollabThruFolderOwnedCount;
    NSNumber * _totalNotesCollabThruFolderReadOnlyCount;
    NSNumber * _totalNotesCollabThruFolderReadWriteJoinedCount;
    NSNumber * _totalNotesNotCollabCount;
}

@property (nonatomic, readonly) NSNumber *totalNotesCollabRootOwnedCount;
@property (nonatomic, readonly) NSNumber *totalNotesCollabRootReadOnlyCount;
@property (nonatomic, readonly) NSNumber *totalNotesCollabRootReadWriteJoinedCount;
@property (nonatomic, readonly) NSNumber *totalNotesCollabThruFolderOwnedCount;
@property (nonatomic, readonly) NSNumber *totalNotesCollabThruFolderReadOnlyCount;
@property (nonatomic, readonly) NSNumber *totalNotesCollabThruFolderReadWriteJoinedCount;
@property (nonatomic, readonly) NSNumber *totalNotesNotCollabCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTotalNotesCollabRootReadOnlyCount:(id)arg1 totalNotesCollabThruFolderReadOnlyCount:(id)arg2 totalNotesCollabRootReadWriteJoinedCount:(id)arg3 totalNotesCollabThruFolderReadWriteJoinedCount:(id)arg4 totalNotesNotCollabCount:(id)arg5 totalNotesCollabRootOwnedCount:(id)arg6 totalNotesCollabThruFolderOwnedCount:(id)arg7;
- (id)toDict;
- (id)totalNotesCollabRootOwnedCount;
- (id)totalNotesCollabRootReadOnlyCount;
- (id)totalNotesCollabRootReadWriteJoinedCount;
- (id)totalNotesCollabThruFolderOwnedCount;
- (id)totalNotesCollabThruFolderReadOnlyCount;
- (id)totalNotesCollabThruFolderReadWriteJoinedCount;
- (id)totalNotesNotCollabCount;

@end
