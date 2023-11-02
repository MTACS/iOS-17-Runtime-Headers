
@interface OspreyMescalSession : NSObject {
    struct FPSAPContextOpaque_ { } * _fairplayContext;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
    unsigned long long  _state;
}

- (id)_exchangeData:(id)arg1 error:(id*)arg2;
- (bool)completeWithHandshakeResponse:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)handshakeRequestWithCertificateData:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)invalidate;
- (id)signData:(id)arg1 error:(id*)arg2;

@end
