
@interface PKApplyWebServiceRequestAuthenticationContext : NSObject <NSSecureCoding> {
    NSArray * _certificates;
    NSData * _signature;
    NSData * _signaturePayload;
}

@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic, copy) NSData *signaturePayload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignaturePayload:(id)arg1;
- (id)signature;
- (id)signaturePayload;

@end
