
@interface _EDThreadPositionChangeSet : NSObject <NSCopying> {
    NSMutableDictionary * _objectIDsToAddByBeforeObjectID;
    NSMutableSet * _objectIDsToDelete;
    NSMutableDictionary * _objectIDsToMoveByBeforeObjectID;
}

@property (nonatomic, retain) NSMutableDictionary *objectIDsToAddByBeforeObjectID;
@property (nonatomic, retain) NSMutableSet *objectIDsToDelete;
@property (nonatomic, retain) NSMutableDictionary *objectIDsToMoveByBeforeObjectID;

- (void).cxx_destruct;
- (bool)_isMovingObjectID:(id)arg1;
- (bool)addObjectIDToAdd:(id)arg1 before:(id)arg2;
- (void)addObjectIDToDelete:(id)arg1;
- (bool)addObjectIDToMove:(id)arg1 before:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isAddingObjectID:(id)arg1;
- (bool)isDeletingObjectID:(id)arg1;
- (id)objectIDsToAddByBeforeObjectID;
- (id)objectIDsToDelete;
- (id)objectIDsToMoveByBeforeObjectID;
- (void)setObjectIDsToAddByBeforeObjectID:(id)arg1;
- (void)setObjectIDsToDelete:(id)arg1;
- (void)setObjectIDsToMoveByBeforeObjectID:(id)arg1;

@end
