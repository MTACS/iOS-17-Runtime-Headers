
@interface DAAccountChangeInfo : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _accountTypeIdentifier;
    unsigned long long  _changeType;
    NSString * _clientName;
    NSSet * _modifiedDataClasses;
    NSDictionary * _oldAccountProperties;
    NSString * _oldPassword;
    NSString * _oldUsername;
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSString *accountTypeIdentifier;
@property (nonatomic, readonly) unsigned long long changeType;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSSet *modifiedDataClasses;
@property (nonatomic, readonly, copy) NSDictionary *oldAccountProperties;
@property (nonatomic, readonly, copy) NSString *oldPassword;
@property (nonatomic, readonly, copy) NSString *oldUsername;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)_stringForChangeType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)accountTypeIdentifier;
- (unsigned long long)changeType;
- (id)clientName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChangeType:(unsigned long long)arg1 accountIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 oldAccountProperties:(id)arg4 username:(id)arg5 password:(id)arg6 oldUsername:(id)arg7 oldPassword:(id)arg8 modifiedDataClasses:(id)arg9 clientName:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (id)modifiedDataClasses;
- (id)oldAccountProperties;
- (id)oldPassword;
- (id)oldUsername;
- (id)password;
- (id)redactedDescription;
- (id)username;

@end
