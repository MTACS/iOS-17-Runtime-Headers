
@interface CXSendMMIOrUSSDCodeAction : CXAction {
    NSString * _code;
    NSUUID * _senderIdentityUUID;
    long long  _ttyType;
}

@property (nonatomic, copy) NSString *code;
@property (nonatomic, retain) NSUUID *senderIdentityUUID;
@property (nonatomic) long long ttyType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)code;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (id)senderIdentityUUID;
- (void)setCode:(id)arg1;
- (void)setSenderIdentityUUID:(id)arg1;
- (void)setTtyType:(long long)arg1;
- (long long)ttyType;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
