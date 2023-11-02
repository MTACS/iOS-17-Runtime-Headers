
@interface MRCryptoPairingSession : NSObject {
    <MRCryptoPairingSessionDelegate> * _delegate;
    MRDeviceInfo * _device;
    unsigned long long  _role;
}

@property (nonatomic) <MRCryptoPairingSessionDelegate> *delegate;
@property (nonatomic, readonly) MRDeviceInfo *device;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (nonatomic, readonly) unsigned long long role;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (void)close;
- (id)decryptData:(id)arg1 withError:(id*)arg2;
- (id)delegate;
- (bool)deleteIdentityWithError:(id*)arg1;
- (id)device;
- (id)encryptData:(id)arg1 withError:(id*)arg2;
- (void)handlePairingExchangeData:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)init;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;
- (bool)isPaired;
- (bool)isValid;
- (void)open;
- (id)pairedDevices;
- (id)removePeer;
- (unsigned long long)role;
- (void)setDelegate:(id)arg1;
- (id)updatePeer;

@end
