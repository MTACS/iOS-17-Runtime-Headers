
@interface SPRPINController : SPRObject {
    SPRPINCrypto * _pinCrypto;
}

- (void).cxx_destruct;
- (bool)addDigitWithValue:(unsigned char)arg1 error:(id*)arg2;
- (void)cancelPINCapture;
- (bool)capturePINWithParameters:(id)arg1 error:(id*)arg2;
- (id)generatePINBlockAndReturnError:(id*)arg1;
- (bool)removeLastDigitAndReturnError:(id*)arg1;
- (bool)updateParameters:(id)arg1 error:(id*)arg2;
- (bool)verifyWithPINToken:(id)arg1 error:(id*)arg2;

@end
