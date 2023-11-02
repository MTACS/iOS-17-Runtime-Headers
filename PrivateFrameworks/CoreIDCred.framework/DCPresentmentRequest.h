
@interface DCPresentmentRequest : NSObject <NSSecureCoding> {
    NSString * _relyingPartyIdentifier;
    NSData * _requiredPublicKeyIdentifier;
    NSXPCListenerEndpoint * _seAccessEndpoint;
    NSData * _sessionEncryptionIntermediateKeyMaterial;
    NSData * _sessionEstablishment;
    NSData * _sessionTranscript;
}

@property (retain) NSString *relyingPartyIdentifier;
@property (nonatomic, retain) NSData *requiredPublicKeyIdentifier;
@property (nonatomic, retain) NSXPCListenerEndpoint *seAccessEndpoint;
@property (nonatomic, retain) NSData *sessionEncryptionIntermediateKeyMaterial;
@property (nonatomic, retain) NSData *sessionEstablishment;
@property (nonatomic, retain) NSData *sessionTranscript;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionEstablishment:(id)arg1 sessionTranscript:(id)arg2;
- (id)initWithSessionEstablishment:(id)arg1 sessionTranscript:(id)arg2 seAccessEndpoint:(id)arg3;
- (id)relyingPartyIdentifier;
- (id)requiredPublicKeyIdentifier;
- (id)seAccessEndpoint;
- (id)sessionEncryptionIntermediateKeyMaterial;
- (id)sessionEstablishment;
- (id)sessionTranscript;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setRequiredPublicKeyIdentifier:(id)arg1;
- (void)setSeAccessEndpoint:(id)arg1;
- (void)setSessionEncryptionIntermediateKeyMaterial:(id)arg1;
- (void)setSessionEstablishment:(id)arg1;
- (void)setSessionTranscript:(id)arg1;

@end
