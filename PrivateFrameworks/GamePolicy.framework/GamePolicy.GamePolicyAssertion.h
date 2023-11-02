
@interface GamePolicy.GamePolicyAssertion : NSObject <NSSecureCoding> {
    void attributes;
    void identifier;
    void target;
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
