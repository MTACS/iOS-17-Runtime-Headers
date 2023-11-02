
@interface AACustodianRecoveryRequestContext : NSObject <NSCopying, NSSecureCoding> {
    bool  _CLIMode;
    NSString * _custodianRecoveryToken;
    NSUUID * _custodianUUID;
    bool  _dataOnlyRecovery;
    NSString * _ownerAppleID;
    NSString * _recoveryCode;
    NSString * _recoverySessionID;
}

@property (nonatomic) bool CLIMode;
@property (nonatomic, copy) NSString *custodianRecoveryToken;
@property (nonatomic, copy) NSUUID *custodianUUID;
@property (getter=isDataOnlyRecovery, nonatomic) bool dataOnlyRecovery;
@property (nonatomic, copy) NSString *ownerAppleID;
@property (nonatomic, copy) NSString *recoveryCode;
@property (nonatomic, copy) NSString *recoverySessionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)CLIMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianRecoveryToken;
- (id)custodianUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDataOnlyRecovery;
- (id)ownerAppleID;
- (id)recoveryCode;
- (id)recoverySessionID;
- (void)setCLIMode:(bool)arg1;
- (void)setCustodianRecoveryToken:(id)arg1;
- (void)setCustodianUUID:(id)arg1;
- (void)setDataOnlyRecovery:(bool)arg1;
- (void)setOwnerAppleID:(id)arg1;
- (void)setRecoveryCode:(id)arg1;
- (void)setRecoverySessionID:(id)arg1;

@end
