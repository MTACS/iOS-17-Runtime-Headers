
@interface DESPFLEncryptableBuffer : NSObject {
    unsigned long long  _count;
    unsigned long long  _dataLengthVarintOffset;
    NSError * _encryptionError;
    bool  _encryptionWasAttempted;
    unsigned long long  _ivOffset;
    unsigned long long  _mutableFloatsOffset;
    NSMutableData * _serializedData;
    unsigned long long  _sizeOfDataTransport;
    unsigned long long  _sizeOfDataTransportOffset;
    bool  _transportIsBfloat16;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) float*mutableDataNumbers;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)encryptedDataWithPublicKey:(id)arg1 error:(id*)arg2;
- (id)initWithEncryptor:(id)arg1 count:(unsigned long long)arg2;
- (float*)mutableDataNumbers;

@end
