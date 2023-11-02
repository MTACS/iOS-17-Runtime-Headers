
@interface PLDetectionTrait : PLManagedObject

@property (nonatomic, retain) PLDetectedFace *detection;
@property (nonatomic) double duration;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) short type;
@property (nonatomic) short value;

+ (id)entityName;
+ (id)fetchDetectionTraitByFaceUUIDWithFaceUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3;
+ (id)insertIntoManagedObjectContext:(id)arg1 type:(short)arg2 value:(short)arg3 score:(double)arg4 startTime:(double)arg5 duration:(double)arg6;
+ (bool)isPetDetectionType:(short)arg1;

- (void)_touchPersonForPersistenceIfNeeded;
- (id)debugLogDescription;
- (void)willSave;

@end
