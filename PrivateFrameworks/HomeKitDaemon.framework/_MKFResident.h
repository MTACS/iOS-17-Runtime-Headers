
@interface _MKFResident : _MKFModel <MKFResident, MKFResidentPrivateExtensions>

@property (nonatomic, retain) _MKFAppleMediaAccessory *appleMediaAccessory;
@property (nonatomic, retain) <MKFAppleMediaAccessory> *appleMediaAccessory;
@property (nonatomic, readonly, copy) MKFResidentDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MKFDevice> *device;
@property (nonatomic, retain) _MKFDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, copy) NSString *idsDestination;
@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *reachable;
@property (nonatomic, retain) NSData *residentCapabilities;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfResident;
- (id)databaseID;

@end
