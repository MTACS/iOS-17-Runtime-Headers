
@interface MTLibraryEntityChanges : NSObject <NSCopying> {
    NSMutableSet * _deletedObjectIDs;
    NSString * _entityName;
    NSMutableSet * _insertedObjectIDs;
    NSMutableSet * _updatedObjectIDs;
}

@property (nonatomic, retain) NSMutableSet *deletedObjectIDs;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, retain) NSMutableSet *insertedObjectIDs;
@property (nonatomic, retain) NSMutableSet *updatedObjectIDs;

- (void).cxx_destruct;
- (void)add:(id)arg1 changeType:(int)arg2;
- (void)combineChanges:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedObjectIDs;
- (id)description;
- (id)entityName;
- (bool)hasChanges;
- (bool)hasDeletes;
- (bool)hasInserts;
- (bool)hasUpdates;
- (id)initWithEntityName:(id)arg1;
- (id)insertedAndUpdatedObjectIDs;
- (id)insertedObjectIDs;
- (void)setDeletedObjectIDs:(id)arg1;
- (void)setInsertedObjectIDs:(id)arg1;
- (void)setUpdatedObjectIDs:(id)arg1;
- (id)updatedObjectIDs;

@end
