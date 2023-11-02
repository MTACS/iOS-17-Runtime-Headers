
@interface ICASCollabFoldersItemData : NSObject <AADataEventType> {
    NSNumber * _totalFoldersCollabRootOwnedCount;
    NSNumber * _totalFoldersCollabRootReadOnlyCount;
    NSNumber * _totalFoldersCollabRootReadWriteJoinedCount;
    NSNumber * _totalFoldersCollabSubfolderOwnedCount;
    NSNumber * _totalFoldersCollabSubfolderReadOnlyCount;
    NSNumber * _totalFoldersCollabSubfolderReadWriteJoinedCount;
    NSNumber * _totalFoldersNotCollabCount;
}

@property (nonatomic, readonly) NSNumber *totalFoldersCollabRootOwnedCount;
@property (nonatomic, readonly) NSNumber *totalFoldersCollabRootReadOnlyCount;
@property (nonatomic, readonly) NSNumber *totalFoldersCollabRootReadWriteJoinedCount;
@property (nonatomic, readonly) NSNumber *totalFoldersCollabSubfolderOwnedCount;
@property (nonatomic, readonly) NSNumber *totalFoldersCollabSubfolderReadOnlyCount;
@property (nonatomic, readonly) NSNumber *totalFoldersCollabSubfolderReadWriteJoinedCount;
@property (nonatomic, readonly) NSNumber *totalFoldersNotCollabCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTotalFoldersCollabRootReadOnlyCount:(id)arg1 totalFoldersCollabSubfolderReadOnlyCount:(id)arg2 totalFoldersCollabRootReadWriteJoinedCount:(id)arg3 totalFoldersCollabSubfolderReadWriteJoinedCount:(id)arg4 totalFoldersNotCollabCount:(id)arg5 totalFoldersCollabRootOwnedCount:(id)arg6 totalFoldersCollabSubfolderOwnedCount:(id)arg7;
- (id)toDict;
- (id)totalFoldersCollabRootOwnedCount;
- (id)totalFoldersCollabRootReadOnlyCount;
- (id)totalFoldersCollabRootReadWriteJoinedCount;
- (id)totalFoldersCollabSubfolderOwnedCount;
- (id)totalFoldersCollabSubfolderReadOnlyCount;
- (id)totalFoldersCollabSubfolderReadWriteJoinedCount;
- (id)totalFoldersNotCollabCount;

@end
