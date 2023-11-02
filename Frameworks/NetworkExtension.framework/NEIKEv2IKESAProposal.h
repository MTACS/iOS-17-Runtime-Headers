
@interface NEIKEv2IKESAProposal : NSObject <NEPrettyDescription, NSCopying> {
    NEIKEv2AuthenticationProtocol * _authenticationProtocol;
    NEIKEv2DHProtocol * _chosenDHProtocol;
    NEIKEv2EncryptionProtocol * _chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol * _chosenIntegrityProtocol;
    NEIKEv2PRFProtocol * _chosenPRFProtocol;
    NSArray * _dhProtocols;
    NSArray * _eapProtocols;
    NSArray * _encryptionProtocols;
    NSArray * _integrityProtocols;
    unsigned long long  _lifetimeSeconds;
    NSArray * _prfProtocols;
    unsigned char  _proposalNumber;
}

@property (retain) NSArray *dhProtocols;
@property (retain) NSArray *eapProtocols;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property unsigned long long lifetimeSeconds;
@property (retain) NSArray *prfProtocols;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)dhProtocols;
- (id)eapProtocols;
- (id)encryptionProtocols;
- (id)init;
- (id)integrityProtocols;
- (unsigned long long)lifetimeSeconds;
- (id)prfProtocols;
- (void)setDhProtocols:(id)arg1;
- (void)setEapProtocols:(id)arg1;
- (void)setEncryptionProtocols:(id)arg1;
- (void)setIntegrityProtocols:(id)arg1;
- (void)setLifetimeSeconds:(unsigned long long)arg1;
- (void)setPrfProtocols:(id)arg1;

@end
