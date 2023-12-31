
@interface RMSFairPlaySession : NSObject {
    bool  _handshakeComplete;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
    struct FPSAPContextOpaque_ { } * _sessionToken;
}

@property (getter=isHandshakeComplete, nonatomic, readonly) bool handshakeComplete;

- (bool)_getHardwareInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; }*)arg1;
- (id)_hexStringForData:(id)arg1;
- (void)dealloc;
- (id)handshakeData;
- (id)handshakeIterationWithData:(id)arg1;
- (id)headerForURL:(id)arg1;
- (void)invalidate;
- (bool)isHandshakeComplete;

@end
