
@interface _MKFCharacteristic : _MKFObject <MKFCharacteristic, MKFCharacteristicPrivateExtensions>

@property (nonatomic, retain) NSData *authorizationData;
@property (nonatomic, readonly, retain) NSArray *bulletinRegistrations;
@property (nonatomic, retain) NSSet *bulletinRegistrations_;
@property (nonatomic, readonly, copy) MKFCharacteristicDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *format;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, readonly, copy) NSNumber *instanceID;
@property (nonatomic, copy) NSString *manufacturerDescription;
@property (nonatomic, readonly, retain) NSArray *notificationRegistrations;
@property (nonatomic, retain) NSSet *notificationRegistrations_;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (nonatomic, copy) NSNumber *properties;
@property (nonatomic, retain) _MKFService *service;
@property (nonatomic, readonly, retain) <MKFService> *service;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSUUID *type;
@property (nonatomic, copy) NSString *units;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)homeRelation;

- (id)bulletinRegistrations;
- (id)castIfCharacteristic;
- (id)databaseID;
- (id)home;
- (id)notificationRegistrations;
- (id)pr_dictionaryRepresentation;
- (id)pr_hapMetadata;
- (void)pr_updateWithDictionary:(id)arg1;
- (void)pr_updateWithHAPMetadata:(id)arg1;

@end
