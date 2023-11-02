
@interface SEEndPointSignatureResponse : NSObject <NSSecureCoding, SESEndPointSignature> {
    NSData * _signature;
    NSData * _signedData;
}

@property (nonatomic, retain) NSData *signature;
@property (nonatomic, retain) NSData *signedData;

+ (id)responseWithSignedData:(id)arg1 signature:(id)arg2;
+ (id)signature:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignedData:(id)arg1;
- (id)signature;
- (id)signedData;

@end
