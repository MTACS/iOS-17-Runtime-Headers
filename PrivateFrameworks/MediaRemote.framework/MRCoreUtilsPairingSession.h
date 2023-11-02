
@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {
    MRPasscodeCredentials * _credentials;
    bool  _hasExchangedMessage;
    NSData * _inputKey;
    NSMutableData * _inputNonce;
    NSData * _outputKey;
    NSMutableData * _outputNonce;
    struct { 
        void *context; 
        int (*showSetupCode_f)(); 
        int (*hideSetupCode_f)(); 
        int (*promptForSetupCode_f)(); 
        int (*copyIdentity_f)(); 
        int (*findPeer_f)(); 
        int (*savePeer_f)(); 
        int (*resumeRequest_f)(); 
        int (*resumeResponse_f)(); 
    }  _pairingDelegate;
    unsigned int  _pairingFlags;
    struct PairingSessionPrivate { } * _pairingSession;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _state;
}

@property (nonatomic, readonly) bool hasExchangedMessage;
@property (nonatomic, retain) NSData *inputKey;
@property (nonatomic, retain) NSMutableData *inputNonce;
@property (nonatomic, readonly) NSMutableDictionary *mediaRemotePairedDevices;
@property (nonatomic, retain) NSData *outputKey;
@property (nonatomic, retain) NSMutableData *outputNonce;
@property (nonatomic, readonly) MRDeviceInfo *pairedPeerDevice;
@property (nonatomic, readonly) NSArray *pairedPeerDevices;
@property (nonatomic) unsigned int pairingFlags;
@property (nonatomic, readonly) NSString *peerIdentifier;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (id)addPeer;
- (void)close;
- (void)dealloc;
- (id)decryptData:(id)arg1 withError:(id*)arg2;
- (bool)deleteIdentityWithError:(id*)arg1;
- (id)encryptData:(id)arg1 withError:(id*)arg2;
- (void)handlePairingExchangeData:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (bool)hasExchangedMessage;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;
- (id)initializePairingSession:(struct PairingSessionPrivate { }*)arg1;
- (id)inputKey;
- (id)inputNonce;
- (bool)isPaired;
- (bool)isValid;
- (id)mediaRemotePairedDevices;
- (void)open;
- (void)openInState:(unsigned long long)arg1;
- (id)outputKey;
- (id)outputNonce;
- (id)pairedDevices;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (unsigned int)pairingFlags;
- (id)peerIdentifier;
- (id)removePeer;
- (void)setInputKey:(id)arg1;
- (void)setInputNonce:(id)arg1;
- (void)setOutputKey:(id)arg1;
- (void)setOutputNonce:(id)arg1;
- (void)setPairingFlags:(unsigned int)arg1;
- (bool)shouldAutoRetryPairingExchange:(id)arg1;
- (unsigned long long)state;
- (id)updatePeer;

@end
