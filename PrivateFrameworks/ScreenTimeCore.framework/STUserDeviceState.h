
@interface STUserDeviceState : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (nonatomic, copy) NSData *capabilitiesPlist;
@property (nonatomic) bool cloudSyncEnabled;
@property (nonatomic, copy) NSString *coreDuetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) STCoreDevice *device;
@property (nonatomic, copy) NSData *deviceInfoPlist;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *installedApps;
@property (nonatomic, copy) NSDate *lastFamilyCheckinDate;
@property (nonatomic, retain) STCoreDevice *localDevice;
@property (nonatomic, retain) STCoreUser *localUser;
@property (nonatomic) bool managementEnabled;
@property (nonatomic) long long msInterventionPolicy;
@property (nonatomic, copy) NSString *passcodeOwner;
@property (nonatomic) bool screenTimeEnabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) STCoreUser *user;

+ (id)fetchLocalUserDeviceStateInContext:(id)arg1 error:(id*)arg2;
+ (id)fetchOrCreateLocalUserDeviceStateInContext:(id)arg1 error:(id*)arg2;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequestMatchingLocalUserDeviceState;
+ (id)serializableClassName;

- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
