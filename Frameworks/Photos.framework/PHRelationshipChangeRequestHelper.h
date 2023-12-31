
@interface PHRelationshipChangeRequestHelper : NSObject <NSSecureCoding> {
    bool  _allowsInsert;
    bool  _allowsMove;
    bool  _allowsRemove;
    PHChangeRequestHelper * _changeRequestHelper;
    NSString * _destinationEntityName;
    NSString * _destinationUUIDKeyPath;
    id /* block */  _isDestinationObjectValid;
    NSMutableArray * _mutableObjectIDsAndUUIDs;
    NSArray * _originalObjectIDs;
    NSString * _relationshipName;
}

@property (nonatomic) bool allowsInsert;
@property (nonatomic) bool allowsMove;
@property (nonatomic) bool allowsRemove;
@property (nonatomic, retain) PHChangeRequestHelper *changeRequestHelper;
@property (nonatomic, retain) NSString *destinationEntityName;
@property (nonatomic, retain) NSString *destinationUUIDKeyPath;
@property (nonatomic, copy) id /* block */ isDestinationObjectValid;
@property (nonatomic, retain) NSMutableArray *mutableObjectIDsAndUUIDs;
@property (nonatomic, retain) NSArray *originalObjectIDs;
@property (nonatomic, readonly) NSString *relationshipName;

+ (id)_offsetsFromSourceOIDs:(id)arg1 toManagedObjects:(id)arg2;
+ (id)existentObjectIDsUsingQuery:(id)arg1;
+ (id)objectIDsOrUUIDsFromPHObjects:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsInsert;
- (bool)allowsMove;
- (bool)allowsRemove;
- (bool)applyMutationsToManagedObject:(id)arg1 orderedMutableChildren:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 inserts:(id*)arg3 deletes:(id*)arg4 error:(id*)arg5;
- (bool)applyMutationsToManagedObjectToOneRelationship:(id)arg1 error:(id*)arg2;
- (id)changeRequestHelper;
- (id)destinationEntityName;
- (id)destinationUUIDKeyPath;
- (void)encodeToXPCDict:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2;
- (id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3;
- (id /* block */)isDestinationObjectValid;
- (id)mutableObjectIDsAndUUIDs;
- (id)originalObjectIDs;
- (void)prepareIfNeededWithExistentObjectIDs:(id)arg1;
- (id)relationshipName;
- (void)setAllowsInsert:(bool)arg1;
- (void)setAllowsMove:(bool)arg1;
- (void)setAllowsRemove:(bool)arg1;
- (void)setChangeRequestHelper:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (void)setDestinationUUIDKeyPath:(id)arg1;
- (void)setIsDestinationObjectValid:(id /* block */)arg1;
- (void)setMutableObjectIDsAndUUIDs:(id)arg1;
- (void)setOriginalObjectIDs:(id)arg1;

@end
