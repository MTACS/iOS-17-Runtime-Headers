
@interface CRKDumpASMCredentialsResultObject : CATTaskResultObject {
    NSDictionary * _credentials;
}

@property (nonatomic, copy) NSDictionary *credentials;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credentials;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCredentials:(id)arg1;

@end
