
@interface __GamePolicyAgentUpdateGameEvent : NSObject <NSSecureCoding> {
    void auditTokenNSValue;
    void date;
}

@property (nonatomic, readonly) NSString *description;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
