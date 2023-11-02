
@interface MBAccountChange : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    long long  _changeType;
    bool  _isPrimaryAccount;
    NSString * _personaIdentifier;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) bool isPrimaryAccount;
@property (nonatomic, readonly) NSString *personaIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (long long)changeType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 personaIdentifier:(id)arg2 isPrimaryAccount:(bool)arg3 changeType:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isPrimaryAccount;
- (id)personaIdentifier;

@end
