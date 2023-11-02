
@interface STInstalledApp : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *iconData;
@property (nonatomic) bool installedLocally;
@property (readonly) Class superclass;
@property (nonatomic, retain) STUserDeviceState *userDeviceState;

+ (id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)serializableClassName;

- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (void)setUserDeviceState:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
