
@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding> {
    NSDictionary * _certificate;
    NSData * _prePeerPaymentCertificate;
}

@property (nonatomic, readonly, retain) NSDictionary *certificate;
@property (nonatomic, readonly, retain) NSData *prePeerPaymentCertificate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)prePeerPaymentCertificate;

@end
