
@interface CNFRegAlias : NSObject {
    NSDate * __expirationDate;
    IMAccount * _account;
    NSString * _alias;
    NSString * _deviceAliasIdentifier;
    NSString * _displayName;
    long long  _givenAliasType;
    bool  _isTemporary;
    bool  _selectedDeviceAlias;
}

@property (nonatomic, copy) NSDate *_expirationDate;
@property (nonatomic, retain) IMAccount *account;
@property (nonatomic, copy) NSString *alias;
@property (nonatomic, copy) NSString *deviceAliasIdentifier;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic) long long givenAliasType;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic) bool isTemporary;
@property (getter=isSelectedDeviceAlias, nonatomic) bool selectedDeviceAlias;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_expirationDate;
- (id)account;
- (id)alias;
- (id)description;
- (id)deviceAliasIdentifier;
- (id)displayName;
- (id)expirationDate;
- (long long)givenAliasType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (id)initWithAlias:(id)arg1 type:(long long)arg2 selected:(bool)arg3 deviceAliasIdentifier:(id)arg4;
- (bool)isDeviceAlias;
- (bool)isEqual:(id)arg1;
- (bool)isLocalPhoneNumberAlias;
- (bool)isPhoneNumberAliasOnPhoneNumberAccount;
- (bool)isSelectedDeviceAlias;
- (bool)isTemporary;
- (bool)isTemporaryPhoneNumberAlias;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setDeviceAliasIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGivenAliasType:(long long)arg1;
- (void)setIsTemporary:(bool)arg1;
- (void)setSelectedDeviceAlias:(bool)arg1;
- (void)set_expirationDate:(id)arg1;
- (long long)type;
- (bool)validate;
- (long long)validationErrorReason;
- (long long)validationStatus;

@end
