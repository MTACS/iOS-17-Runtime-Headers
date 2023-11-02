
@interface _MKFFloatCharacteristic : _MKFCharacteristic <MKFFloatCharacteristic, MKFFloatCharacteristicPrivateExtensions>

@property (nonatomic, retain) NSData *authorizationData;
@property (nonatomic, readonly, retain) NSArray *bulletinRegistrations;
@property (nonatomic, readonly, copy) MKFFloatCharacteristicDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *format;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSNumber *instanceID;
@property (nonatomic, copy) NSString *manufacturerDescription;
@property (nonatomic, copy) NSNumber *maximumValue;
@property (nonatomic, copy) NSNumber *minimumValue;
@property (nonatomic, readonly, retain) NSArray *notificationRegistrations;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (nonatomic, copy) NSNumber *properties;
@property (nonatomic, readonly, retain) <MKFService> *service;
@property (nonatomic, copy) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSUUID *type;
@property (nonatomic, copy) NSString *units;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfFloatCharacteristic;
- (id)databaseID;
- (id)home;
- (id)pr_hapMetadata;
- (void)pr_updateWithHAPMetadata:(id)arg1;

@end
