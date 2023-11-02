
@interface CRKPerformIDSFirewallActionResultObject : CATTaskResultObject {
    NSSet * _allowedAppleIDs;
}

@property (nonatomic, copy) NSSet *allowedAppleIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedAppleIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAllowedAppleIDs:(id)arg1;

@end
