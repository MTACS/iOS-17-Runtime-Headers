
@interface NEIKEv2ChildSA : NSObject {
    unsigned int  _childID;
    NEIKEv2ChildSAProposal * _chosenProposal;
    NEIKEv2ChildSAConfiguration * _configuration;
    struct OpaqueSecDHContext { } * _dhContext;
    NSData * _dhPublicKey;
    unsigned long long  _dhPublicKeySize;
    NSData * _dhRemotePublicKey;
    struct __SecKey { } * _ecdhPrivateKeyRef;
    NSError * _error;
    NEIKEv2IKESA * _ikeSA;
    unsigned short  _incomingDatabaseReqID;
    NSData * _incomingEncryptionKey;
    NSData * _incomingIntegrityKey;
    NEIKEv2ChildSAProposal * _initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal * _initiatorRekeyProposal;
    bool  _isFirstChild;
    bool  _isInitiator;
    NSData * _localNonce;
    NSArray * _localTrafficSelectors;
    unsigned short  _outgoingDatabaseReqID;
    NSData * _outgoingEncryptionKey;
    NSData * _outgoingIntegrityKey;
    NEIKEv2ESPSPI * _rekeyedRemoteSPI;
    NEIKEv2ESPSPI * _rekeyedSPI;
    NSData * _remoteNonce;
    NEIKEv2DHProtocol * _remotePreferredDHProtocol;
    NSArray * _remoteTrafficSelectors;
    NEIKEv2ChildSAProposal * _responderRekeyProposal;
    bool  _sequencePerTrafficClassSupported;
    bool  _shouldSendStateUpdate;
    unsigned long long  _state;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
