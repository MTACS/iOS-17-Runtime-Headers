
@interface SFAuthenticateAccountsServiceConfiguration : NSObject <NSCopying> {
    NSSet * _existingAccountsIdentifiers;
    bool  _isHomeKitSetupNeeded;
    bool  _isHomeSharingSetupNeeded;
    unsigned int  _serviceType;
    unsigned int  _targetedAccountTypes;
}

@property (nonatomic, copy) NSSet *existingAccountsIdentifiers;
@property (nonatomic) bool isHomeKitSetupNeeded;
@property (nonatomic) bool isHomeSharingSetupNeeded;
@property (nonatomic) unsigned int serviceType;
@property (nonatomic) unsigned int targetedAccountTypes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)existingAccountsIdentifiers;
- (id)init;
- (bool)isHomeKitSetupNeeded;
- (bool)isHomeSharingSetupNeeded;
- (unsigned int)serviceType;
- (void)setExistingAccountsIdentifiers:(id)arg1;
- (void)setIsHomeKitSetupNeeded:(bool)arg1;
- (void)setIsHomeSharingSetupNeeded:(bool)arg1;
- (void)setServiceType:(unsigned int)arg1;
- (void)setTargetedAccountTypes:(unsigned int)arg1;
- (unsigned int)targetedAccountTypes;

@end
