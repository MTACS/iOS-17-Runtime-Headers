
@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>

@required

- (NSURL *)baseURL;
- (NSArray *)endpointComponents;
- (PKApplePayTrustHashResponse *)hashResponse;
- (NSData *)manifestHashWithReferenceIdentifier:(NSString *)arg1;
- (NSData *)publicKeyHash;
- (void)setBaseURL:(NSURL *)arg1;
- (void)setHashResponse:(PKApplePayTrustHashResponse *)arg1;
- (void)setPublicKeyHash:(NSData *)arg1;
- (Class)signatureResponseClass;

@end
