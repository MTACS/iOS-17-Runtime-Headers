
@interface SPPairingConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _batteryLevel;
    NSData * _collaborativeKeyC3;
    bool  _isZeus;
    NSData * _keyStatus;
    NSString * _name;
    NSString * _roleEmoji;
    long long  _roleId;
    NSData * _signatureS4;
}

@property (nonatomic) long long batteryLevel;
@property (nonatomic, copy) NSData *collaborativeKeyC3;
@property (nonatomic) bool isZeus;
@property (nonatomic, copy) NSData *keyStatus;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *roleEmoji;
@property (nonatomic) long long roleId;
@property (nonatomic, copy) NSData *signatureS4;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)batteryLevel;
- (id)collaborativeKeyC3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 roleId:(long long)arg2 roleEmoji:(id)arg3 keyStatus:(id)arg4 collaborativeKeyC3:(id)arg5 signatureS4:(id)arg6 isZeus:(bool)arg7 batteryLevel:(long long)arg8;
- (bool)isZeus;
- (id)keyStatus;
- (id)name;
- (id)roleEmoji;
- (long long)roleId;
- (void)setBatteryLevel:(long long)arg1;
- (void)setCollaborativeKeyC3:(id)arg1;
- (void)setIsZeus:(bool)arg1;
- (void)setKeyStatus:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoleEmoji:(id)arg1;
- (void)setRoleId:(long long)arg1;
- (void)setSignatureS4:(id)arg1;
- (id)signatureS4;

@end
