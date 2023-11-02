
@interface AMSDeviceOfferRegistrationItem : NSObject <AMSStorageDatabasePersistable> {
    NSString * _model;
    NSString * _serialNumber;
    NSData * _validationData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *validationData;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDatabaseEntry:(id)arg1;
- (id)initWithSerialNumber:(id)arg1 model:(id)arg2 validationData:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRegistrationItem:(id)arg1;
- (id)model;
- (id)serialNumber;
- (id)serializeToDictionary;
- (id)validationData;

@end
