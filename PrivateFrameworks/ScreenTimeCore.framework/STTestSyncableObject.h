
@interface STTestSyncableObject : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *subobjects;
@property (readonly) Class superclass;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)serializableClassName;

- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
