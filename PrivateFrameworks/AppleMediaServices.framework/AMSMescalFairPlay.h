
@interface AMSMescalFairPlay : NSObject {
    bool  _complete;
    struct FPSAPContextOpaque_ { } * _context;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
    long long  _mescalType;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;

- (id)_dataWithFairPlayBytes:(const char *)arg1 length:(unsigned int)arg2;
- (void)_teardownSession;
- (void)dealloc;
- (id)exchangeData:(id)arg1 error:(id*)arg2;
- (id)initWithMescalType:(long long)arg1 error:(id*)arg2;
- (bool)isComplete;
- (id)primingSignatureForData:(id)arg1 error:(id*)arg2;
- (id)signData:(id)arg1 error:(id*)arg2;
- (bool)verifyPrimeSignature:(id)arg1 error:(id*)arg2;
- (bool)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3;

@end
