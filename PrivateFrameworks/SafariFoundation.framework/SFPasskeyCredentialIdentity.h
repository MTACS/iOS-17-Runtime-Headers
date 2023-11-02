
@interface SFPasskeyCredentialIdentity : SFCredentialIdentity {
    NSString * _credentialID;
    NSString * _userHandle;
}

@property (nonatomic, readonly, copy) NSString *credentialID;
@property (nonatomic, readonly, copy) NSString *userHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRowIdentifier:(long long)arg1 serviceIdentifier:(id)arg2 serviceIdentifierType:(long long)arg3 externalRecordIdentifier:(id)arg4 user:(id)arg5 rank:(long long)arg6 credentialID:(id)arg7 userHandle:(id)arg8;
- (id)initWithServiceIdentifier:(id)arg1 serviceIdentifierType:(long long)arg2 externalRecordIdentifier:(id)arg3 user:(id)arg4 rank:(long long)arg5 credentialID:(id)arg6 userHandle:(id)arg7;
- (bool)isEqual:(id)arg1;
- (long long)type;
- (id)userHandle;

@end
