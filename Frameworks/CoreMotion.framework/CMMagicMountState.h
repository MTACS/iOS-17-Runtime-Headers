
@interface CMMagicMountState : CMLogItem {
    long long  _mountStatus;
}

@property (nonatomic, readonly) long long mountStatus;
@property (getter=isMounted, nonatomic, readonly) bool mounted;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMountStatus:(long long)arg1 timestamp:(double)arg2;
- (bool)isMounted;
- (long long)mountStatus;

@end
