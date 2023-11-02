
@interface PLDetectedFaceGroup : PLManagedObject

@property (nonatomic, retain) PLPerson *associatedPerson;
@property (nonatomic, retain) NSSet *detectedFaces;
@property (nonatomic, retain) PLDetectedFace *keyFace;
@property (nonatomic) int personBuilderState;
@property (nonatomic) int unnamedFaceCount;
@property (nonatomic, retain) NSString *uuid;

+ (void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(id /* block */)arg4;
+ (id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;

- (void)awakeFromInsert;
- (id)mutableDetectedFaces;
- (void)willSave;

@end
