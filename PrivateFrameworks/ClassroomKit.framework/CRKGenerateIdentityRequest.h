
@interface CRKGenerateIdentityRequest : CATTaskRequest {
    NSString * _commonName;
}

@property (nonatomic, copy) NSString *commonName;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commonName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCommonName:(id)arg1;

@end
