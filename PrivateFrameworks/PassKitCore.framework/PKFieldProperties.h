
@interface PKFieldProperties : NSObject <NSSecureCoding> {
    NSArray * _TCIs;
    long long  _accessTerminalSubtype;
    NSString * _applicationIdentifier;
    bool  _authenticationRequired;
    bool  _backgroundTransaction;
    long long  _carKeyBrandCode;
    NSString * _credentialIdentifier;
    unsigned long long  _fieldType;
    NSArray * _merchantIdentifiers;
    unsigned long long  _pairingRequested;
    NSData * _readerIdentifier;
    bool  _secondaryPropertiesAcquired;
    bool  _secondaryPropertiesRequired;
    unsigned long long  _technology;
    long long  _terminalType;
    long long  _valueAddedServiceMode;
}

@property (nonatomic, copy) NSArray *TCIs;
@property (nonatomic, readonly) long long accessTerminalSubtype;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic) bool authenticationRequired;
@property (nonatomic) bool backgroundTransaction;
@property (nonatomic) long long carKeyBrandCode;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) unsigned long long fieldType;
@property (nonatomic, copy) NSArray *merchantIdentifiers;
@property (nonatomic) unsigned long long pairingRequested;
@property (nonatomic, copy) NSData *readerIdentifier;
@property (nonatomic) bool secondaryPropertiesAcquired;
@property (nonatomic) bool secondaryPropertiesRequired;
@property (nonatomic, readonly) bool shouldIgnore;
@property (nonatomic, readonly) unsigned long long technology;
@property (nonatomic, readonly) long long terminalType;
@property (nonatomic, readonly) long long valueAddedServiceMode;

+ (id)fieldPropertiesForFieldNotification:(id)arg1;
+ (id)fieldPropertiesForSTSFieldNotification:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)TCIs;
- (long long)accessTerminalSubtype;
- (id)applicationIdentifier;
- (bool)authenticationRequired;
- (bool)backgroundTransaction;
- (long long)carKeyBrandCode;
- (id)credentialIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fieldType;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 accessTerminalSubtype:(long long)arg3 valueAddedServiceMode:(long long)arg4;
- (id)merchantIdentifiers;
- (unsigned long long)pairingRequested;
- (id)readerIdentifier;
- (bool)secondaryPropertiesAcquired;
- (bool)secondaryPropertiesRequired;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setBackgroundTransaction:(bool)arg1;
- (void)setCarKeyBrandCode:(long long)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setFieldType:(unsigned long long)arg1;
- (void)setMerchantIdentifiers:(id)arg1;
- (void)setPairingRequested:(unsigned long long)arg1;
- (void)setReaderIdentifier:(id)arg1;
- (void)setSecondaryPropertiesAcquired:(bool)arg1;
- (void)setSecondaryPropertiesRequired:(bool)arg1;
- (void)setTCIs:(id)arg1;
- (bool)shouldIgnore;
- (unsigned long long)technology;
- (long long)terminalType;
- (long long)valueAddedServiceMode;

@end
