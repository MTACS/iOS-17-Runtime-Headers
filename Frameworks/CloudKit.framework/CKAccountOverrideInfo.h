
@interface CKAccountOverrideInfo : NSObject <CKSQLiteItem, NSCopying, NSSecureCoding> {
    NSString * _accountID;
    NSDictionary * _accountPropertyOverrides;
    NSString * _altDSID;
    NSString * _email;
    NSDictionary * _overridesByDataclass;
    NSString * _password;
    NSString * _recoveryKey;
    NSString * _secondEmail;
}

@property (nonatomic, readonly, copy) NSString *accountID;
@property (nonatomic, readonly, copy) NSDictionary *accountPropertyOverrides;
@property (nonatomic, readonly, copy) NSString *altDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *email;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *overridesByDataclass;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *recoveryKey;
@property (nonatomic, readonly, copy) NSString *secondEmail;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueID;

+ (id)anonymousAccount;
+ (id)liveAccount;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initWithEmail:(id)arg1 password:(id)arg2 recoveryKey:(id)arg3;
- (id)_initWithEmail:(id)arg1 password:(id)arg2 recoveryKey:(id)arg3 secondEmail:(id)arg4 accountID:(id)arg5 altDSID:(id)arg6 accountPropertyOverrides:(id)arg7 overridesByDataclass:(id)arg8;
- (id)accountID;
- (id)accountPropertyOverrides;
- (id)altDSID;
- (id)copyWithAccountPropertyOverrides:(id)arg1 overridesByDataclass:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountID:(id)arg1;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1 password:(id)arg2;
- (id)initWithEmail:(id)arg1 password:(id)arg2 recoveryKey:(id)arg3;
- (id)initWithEmail:(id)arg1 password:(id)arg2 recoveryKey:(id)arg3 secondEmail:(id)arg4 accountPropertyOverrides:(id)arg5 overridesByDataclass:(id)arg6;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overridesByDataclass;
- (id)password;
- (id)recoveryKey;
- (id)secondEmail;
- (id)sqliteRepresentation;
- (id)uniqueID;

@end
