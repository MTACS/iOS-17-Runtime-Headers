
@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest {
    NSString * _recipient;
}

@property (nonatomic, retain) NSString *recipient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recipient;
- (void)setRecipient:(id)arg1;

@end
