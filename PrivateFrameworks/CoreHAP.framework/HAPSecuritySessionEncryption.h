
@interface HAPSecuritySessionEncryption : NSObject {
    NSData * _inputKey;
    NSMutableData * _inputNonce;
    NSData * _outputKey;
    NSMutableData * _outputNonce;
}

@property (nonatomic, retain) NSData *inputKey;
@property (nonatomic, retain) NSMutableData *inputNonce;
@property (nonatomic, retain) NSData *outputKey;
@property (nonatomic, retain) NSMutableData *outputNonce;

- (void).cxx_destruct;
- (id)decrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (id)decrypt:(const void*)arg1 length:(unsigned long long)arg2 additionalAuthData:(const void*)arg3 additionalAuthDataLength:(unsigned long long)arg4 authTagData:(const void*)arg5 authTagDataLength:(unsigned long long)arg6 error:(id*)arg7;
- (id)encrypt:(id)arg1 additionalAuthenticatedData:(id)arg2;
- (id)init;
- (id)initWithInputKey:(id)arg1 outputKey:(id)arg2;
- (id)inputKey;
- (id)inputNonce;
- (id)outputKey;
- (id)outputNonce;
- (void)setInputKey:(id)arg1;
- (void)setInputNonce:(id)arg1;
- (void)setOutputKey:(id)arg1;
- (void)setOutputNonce:(id)arg1;

@end
