
@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding> {
    AMSBiometricsSignatureRequest * _originalRequest;
    NSData * _publicKey;
    NSString * _signature;
}

@property (nonatomic, retain) AMSBiometricsSignatureRequest *originalRequest;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSString *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originalRequest;
- (id)publicKey;
- (void)setOriginalRequest:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
