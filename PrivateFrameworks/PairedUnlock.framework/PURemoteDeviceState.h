
@interface PURemoteDeviceState : NSObject <NSSecureCoding> {
    bool  _passcodeLocked;
    PURemotePasscodePolicy * _passcodePolicy;
    bool  _passcodeSet;
    bool  _unlockOnly;
    unsigned int  _version;
    bool  _wristDetectEnabled;
}

@property (getter=isPasscodeLocked, nonatomic) bool passcodeLocked;
@property (nonatomic, retain) PURemotePasscodePolicy *passcodePolicy;
@property (getter=hasPasscodeSet, nonatomic) bool passcodeSet;
@property (getter=isUnlockOnly, nonatomic) bool unlockOnly;
@property (nonatomic) unsigned int version;
@property (getter=isWristDetectEnabled, nonatomic) bool wristDetectEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPasscodeSet;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPasscodeLocked;
- (bool)isUnlockOnly;
- (bool)isWristDetectEnabled;
- (id)passcodePolicy;
- (void)setPasscodeLocked:(bool)arg1;
- (void)setPasscodePolicy:(id)arg1;
- (void)setPasscodeSet:(bool)arg1;
- (void)setUnlockOnly:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWristDetectEnabled:(bool)arg1;
- (unsigned int)version;

@end
