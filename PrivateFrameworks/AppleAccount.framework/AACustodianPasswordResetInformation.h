
@interface AACustodianPasswordResetInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _custodianRecoveryToken;
    NSString * _ownerAppleID;
}

@property (nonatomic, copy) NSString *custodianRecoveryToken;
@property (nonatomic, copy) NSString *ownerAppleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianRecoveryToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecoveryToken:(id)arg1 ownerAppleID:(id)arg2;
- (id)ownerAppleID;
- (void)setCustodianRecoveryToken:(id)arg1;
- (void)setOwnerAppleID:(id)arg1;

@end
