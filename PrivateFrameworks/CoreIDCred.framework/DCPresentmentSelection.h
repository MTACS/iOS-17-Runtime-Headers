
@interface DCPresentmentSelection : NSObject <NSSecureCoding> {
    NSData * _authData;
    NSString * _credentialIdentifier;
    NSDictionary * _deviceNamespaces;
    NSDictionary * _elementsToPresent;
    NSArray * _responseEncryptionCertificateChain;
    NSXPCListenerEndpoint * _seAccessEndpoint;
    NSData * _sessionTranscript;
}

@property (nonatomic, retain) NSData *authData;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSDictionary *deviceNamespaces;
@property (nonatomic, retain) NSDictionary *elementsToPresent;
@property (nonatomic, retain) NSArray *responseEncryptionCertificateChain;
@property (nonatomic, retain) NSXPCListenerEndpoint *seAccessEndpoint;
@property (nonatomic, retain) NSData *sessionTranscript;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authData;
- (id)credentialIdentifier;
- (id)deviceNamespaces;
- (id)elementsToPresent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialIdentifier:(id)arg1 elementsToPresent:(id)arg2 authData:(id)arg3 seAccessEndpoint:(id)arg4;
- (id)initWithCredentialIdentifier:(id)arg1 elementsToPresent:(id)arg2 authData:(id)arg3 seAccessEndpoint:(id)arg4 deviceNamespaces:(id)arg5;
- (id)responseEncryptionCertificateChain;
- (id)seAccessEndpoint;
- (id)sessionTranscript;
- (void)setAuthData:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setDeviceNamespaces:(id)arg1;
- (void)setElementsToPresent:(id)arg1;
- (void)setResponseEncryptionCertificateChain:(id)arg1;
- (void)setSeAccessEndpoint:(id)arg1;
- (void)setSessionTranscript:(id)arg1;

@end
