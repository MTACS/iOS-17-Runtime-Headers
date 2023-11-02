
@interface STStatusBarDataLockEntry : STStatusBarDataEntry {
    long long  _unlockFailureCount;
}

@property (nonatomic, readonly) long long unlockFailureCount;

+ (id)entryWithUnlockFailureCount:(long long)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (long long)unlockFailureCount;

@end
