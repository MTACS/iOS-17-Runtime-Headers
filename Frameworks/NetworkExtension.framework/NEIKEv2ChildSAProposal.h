
@interface NEIKEv2ChildSAProposal : NSObject <NEPrettyDescription, NSCopying> {
    NEIKEv2DHProtocol * _chosenDHProtocol;
    NEIKEv2EncryptionProtocol * _chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol * _chosenIntegrityProtocol;
    NSArray * _dhProtocols;
    NSArray * _encryptionProtocols;
    NSArray * _integrityProtocols;
    unsigned long long  _lifetimeSeconds;
    bool  _opportunisticPFS;
    unsigned char  _proposalNumber;
    unsigned long long  _protocol;
    NEIKEv2ESPSPI * _remoteSPI;
    NEIKEv2ESPSPI * _spi;
}

@property (retain) NSArray *dhProtocols;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property unsigned long long lifetimeSeconds;
@property bool opportunisticPFS;
@property unsigned long long protocol;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)dhProtocols;
- (id)encryptionProtocols;
- (id)init;
- (id)integrityProtocols;
- (unsigned long long)lifetimeSeconds;
- (bool)opportunisticPFS;
- (unsigned long long)protocol;
- (void)setDhProtocols:(id)arg1;
- (void)setEncryptionProtocols:(id)arg1;
- (void)setIntegrityProtocols:(id)arg1;
- (void)setLifetimeSeconds:(unsigned long long)arg1;
- (void)setOpportunisticPFS:(bool)arg1;
- (void)setProtocol:(unsigned long long)arg1;

@end
