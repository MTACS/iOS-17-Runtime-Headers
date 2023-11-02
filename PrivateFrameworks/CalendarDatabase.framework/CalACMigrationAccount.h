
@interface CalACMigrationAccount : NSObject <CalMigrationAccount> {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, retain) NSString *accountDescription;
@property (nonatomic) bool authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dirty;
@property (nonatomic) bool enabledForCalendarsDataClass;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool provisionedForCalendarsDataClass;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *username;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (id)account;
- (id)accountDescription;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountTypeIdentifier;
- (bool)authenticated;
- (bool)dirty;
- (bool)enabledForCalendarsDataClass;
- (id)identifier;
- (id)initWithACAccount:(id)arg1;
- (id)parentAccountIdentifier;
- (bool)provisionedForCalendarsDataClass;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;
- (void)setEnabledForCalendarsDataClass:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setProvisionedForCalendarsDataClass:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)username;
- (bool)visible;

@end
