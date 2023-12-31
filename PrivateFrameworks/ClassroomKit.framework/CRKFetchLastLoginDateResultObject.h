
@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject {
    NSDictionary * _lastLoginDatesByAppleID;
}

@property (nonatomic, copy) NSDictionary *lastLoginDatesByAppleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatesByAppleID:(id)arg1;
- (id)lastLoginDatesByAppleID;
- (void)setLastLoginDatesByAppleID:(id)arg1;

@end
