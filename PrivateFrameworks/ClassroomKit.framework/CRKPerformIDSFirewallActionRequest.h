
@interface CRKPerformIDSFirewallActionRequest : CATTaskRequest {
    long long  _action;
    NSSet * _allowedAppleIDs;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSSet *allowedAppleIDs;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)allowedAppleIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setAllowedAppleIDs:(id)arg1;

@end
