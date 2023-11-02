
@interface AMSDeviceOfferRegistrationGroup : NSObject <AMSStorageDatabasePersistable> {
    NSArray * _registrationItems;
    unsigned long long  _validationOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *registrationItems;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long validationOptions;

- (void).cxx_destruct;
- (id)_initWithRegistrationItems:(id)arg1 validationOptions:(unsigned long long)arg2;
- (bool)_serialsMatchSerialsFromGroup:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDatabaseEntry:(id)arg1;
- (id)initWithRegistrationItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRegistrationGroup:(id)arg1;
- (bool)isModifiedVersionOfGroup:(id)arg1;
- (id)registrationItems;
- (id)serializeToDictionary;
- (void)setValidationOptions:(unsigned long long)arg1;
- (unsigned long long)validationOptions;

@end
