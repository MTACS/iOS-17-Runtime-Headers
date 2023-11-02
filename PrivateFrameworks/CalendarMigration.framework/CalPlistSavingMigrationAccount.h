
@interface CalPlistSavingMigrationAccount : NSObject <CalMigrationAccount> {
    NSString * _accountTypeIdentifier;
    <CalMigrationReadOnlyAccount> * _backingAccount;
    NSString * _identifier;
    NSMutableDictionary * _modifiedProperties;
    NSString * _parentAccountIdentifier;
    NSMutableDictionary * _savedProperties;
}

@property (nonatomic, retain) NSString *accountDescription;
@property (nonatomic) bool authenticated;
@property (nonatomic, readonly) <CalMigrationReadOnlyAccount> *backingAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dirty;
@property (nonatomic) bool enabledForCalendarsDataClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSMutableDictionary *modifiedProperties;
@property (nonatomic, retain) NSString *parentAccountIdentifier;
@property (nonatomic) bool provisionedForCalendarsDataClass;
@property (nonatomic, readonly) NSMutableDictionary *savedProperties;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *username;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountTypeIdentifier;
- (bool)authenticated;
- (id)backingAccount;
- (bool)dirty;
- (bool)enabledForCalendarsDataClass;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 accountTypeIdentifier:(id)arg2 backingAccount:(id)arg3 initialProperties:(id)arg4;
- (id)modifiedProperties;
- (id)parentAccountIdentifier;
- (bool)provisionedForCalendarsDataClass;
- (void)save;
- (id)savedProperties;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;
- (void)setEnabledForCalendarsDataClass:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParentAccountIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProvisionedForCalendarsDataClass:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)username;
- (bool)visible;

@end
