
@protocol EKFrozenMeltedPair <NSObject>

@required

+ (Class)frozenClass;
+ (Class)meltedClass;

- (CADGenerationStampedObjectID *)CADObjectID;
- (EKChangeSet *)changeSet;
- (EKObject *)existingMeltedObject;
- (Class)frozenClass;
- (EKPersistentObject *)frozenObject;
- (EKPersistentObject *)frozenObjectInStore:(EKEventStore *)arg1;
- (bool)isCompletelyEqual:(id <EKFrozenMeltedPair>)arg1;
- (bool)isEqual:(id <EKFrozenMeltedPair>)arg1 ignoringProperties:(NSSet *)arg2;
- (bool)isFrozen;
- (bool)isPartialObject;
- (bool)isPropertyUnavailable:(NSString *)arg1;
- (EKObject *)meltedObjectInStore:(EKEventStore *)arg1;
- (EKObjectID *)objectID;
- (void)reset;
- (NSString *)semanticIdentifier;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (NSString *)uniqueIdentifier;
- (id)valueForKey:(NSString *)arg1;

@end
