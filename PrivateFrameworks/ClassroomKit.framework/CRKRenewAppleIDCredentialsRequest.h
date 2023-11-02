
@interface CRKRenewAppleIDCredentialsRequest : CATTaskRequest {
    bool  _force;
    NSString * _reason;
}

@property (nonatomic) bool force;
@property (nonatomic, copy) NSString *reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)force;
- (id)initWithCoder:(id)arg1;
- (id)reason;
- (void)setForce:(bool)arg1;
- (void)setReason:(id)arg1;

@end
