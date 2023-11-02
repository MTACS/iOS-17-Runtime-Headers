
@interface CRKClearASMCredentialsRequest : CATTaskRequest {
    long long  _role;
    long long  _type;
}

@property (nonatomic) long long role;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)role;
- (void)setRole:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
