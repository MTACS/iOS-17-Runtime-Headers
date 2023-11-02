
@interface IDSAuthenticationCertificateSignature : NSObject {
    IDSAuthenticationCertificate * _authenticationCertificate;
    NSString * _serverVerifiableEncoding;
    NSData * _signature;
    NSString * _subscriptionIdentifier;
}

@property (nonatomic, readonly) IDSAuthenticationCertificate *authenticationCertificate;
@property (nonatomic, readonly) NSString *serverVerifiableEncoding;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSString *subscriptionIdentifier;

- (void).cxx_destruct;
- (id)authenticationCertificate;
- (id)description;
- (id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 nonce:(id)arg4;
- (id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 serverVerifiableEncoding:(id)arg4;
- (id)serverVerifiableEncoding;
- (id)signature;
- (id)subscriptionIdentifier;

@end
