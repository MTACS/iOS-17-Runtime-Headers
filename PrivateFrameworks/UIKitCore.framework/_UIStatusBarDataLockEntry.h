
@interface _UIStatusBarDataLockEntry : _UIStatusBarDataEntry {
    long long  _unlockFailureCount;
}

@property (nonatomic) long long unlockFailureCount;

+ (bool)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUnlockFailureCount:(long long)arg1;
- (long long)unlockFailureCount;

@end
