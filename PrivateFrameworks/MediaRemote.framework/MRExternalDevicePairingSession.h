
@interface MRExternalDevicePairingSession : MRCryptoPairingSession {
    MRCryptoPairingSessionBlockDelegate * _pairingDelegate;
    MRCoreUtilsPairingSession * _pairingSession;
}

@property (nonatomic, readonly) bool hasExchangedMessage;
@property (nonatomic, retain) MRCryptoPairingSessionBlockDelegate *pairingDelegate;
@property (nonatomic, retain) MRCoreUtilsPairingSession *pairingSession;
@property (nonatomic, readonly) unsigned long long state;
@property (getter=isUsingSystemPairing, nonatomic, readonly) bool usingSystemPairing;

- (void).cxx_destruct;
- (void)close;
- (id)decryptData:(id)arg1 withError:(id*)arg2;
- (bool)deleteIdentityWithError:(id*)arg1;
- (id)encryptData:(id)arg1 withError:(id*)arg2;
- (void)handlePairingExchangeData:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (bool)hasExchangedMessage;
- (id)initWithDevice:(id)arg1;
- (bool)isPaired;
- (bool)isUsingSystemPairing;
- (bool)isValid;
- (void)open;
- (id)pairedDevices;
- (id)pairingDelegate;
- (id)pairingSession;
- (id)removePeer;
- (void)setDelegate:(id)arg1;
- (void)setPairingDelegate:(id)arg1;
- (void)setPairingSession:(id)arg1;
- (unsigned long long)state;
- (id)updatePeer;

@end
