
@interface MKFCKAccessory : MKFCKHomeObject

@property (nonatomic, retain) NSDictionary *applicationData;
@property (nonatomic, retain) NSSet *automations;
@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, copy) NSUUID *groupIdentifier;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, retain) MKFCKAccessory *hostAccessory;
@property (nonatomic, retain) NSSet *hostedAccessories;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *initialCategory;
@property (nonatomic, copy) NSString *initialManufacturer;
@property (nonatomic, copy) NSString *initialModel;
@property (nonatomic) bool isHosted;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic) long long networkClientIdentifier;
@property (nonatomic) long long networkClientLAN;
@property (nonatomic, copy) NSUUID *networkRouterUUID;
@property (nonatomic) bool ownerListeningHistoryEnabled;
@property (nonatomic) bool ownerMediaContentProfileEnabled;
@property (nonatomic) bool ownerPersonalRequestsEnabled;
@property (nonatomic, copy) NSString *productData;
@property (nonatomic, retain) MKFCKRoom *room;
@property (nonatomic, retain) NSSet *scenes;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, retain) NSData *wiFiUniquePreSharedKey;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)fetchRequest;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)isReadyToImportIntoLocalModelWithContext:(id)arg1;

@end
