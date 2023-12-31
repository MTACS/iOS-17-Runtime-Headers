
@interface DMFFetchLastLoginDateResultObject : CATTaskResultObject {
    NSDictionary * _lastLoginDatesByAppleID;
}

@property (nonatomic, readonly, copy) NSDictionary *lastLoginDatesByAppleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatesByAppleID:(id)arg1;
- (id)lastLoginDatesByAppleID;

@end
