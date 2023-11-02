
@interface GamePolicy.GamePolicyTargetDescription : NSObject <NSSecureCoding> {
    void auditToken;
    void euid;
    void targetDescription;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
