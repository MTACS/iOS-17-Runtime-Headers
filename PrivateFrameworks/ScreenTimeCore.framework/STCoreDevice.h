
@interface STCoreDevice : NSManagedObject <STSyncableSubObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) STUserDeviceState *localUserDeviceState;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) short platform;
@property (readonly) Class superclass;
@property (readonly) <STSerializableManagedObject> *syncableRootObject;
@property (nonatomic, retain) NSSet *usages;
@property (nonatomic, retain) NSSet *userDeviceAddresses;
@property (nonatomic, retain) NSSet *userDeviceStates;

+ (id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id*)arg2;
+ (id)fetchRequestForOrphanedDevices;

- (id)syncableRootObject;

@end
