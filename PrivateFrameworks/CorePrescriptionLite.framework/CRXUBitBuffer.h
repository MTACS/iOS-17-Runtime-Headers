
@interface CRXUBitBuffer : NSObject {
    unsigned long long  _bitCount;
    unsigned long long  _bitOffset;
    unsigned long long  _bitOffsetInByte;
    unsigned char  _curInputByte;
    NSData * _inputData;
    const char * _inputEndPtr;
    const char * _inputPtr;
    NSMutableData * _outputData;
    char * _outputPtr;
}

@property (nonatomic, readonly) unsigned long long bitCount;

- (void).cxx_destruct;
- (unsigned long long)bitCount;
- (id)initWithData:(id)arg1;
- (id)initWithMutableData:(id)arg1;
- (void)nextByte;
- (bool)readBool:(bool*)arg1;
- (bool)readData:(id)arg1 bitWidth:(unsigned long long)arg2;
- (bool)readUInteger:(unsigned long long*)arg1 bitWidth:(unsigned long long)arg2;
- (void)rewind;
- (bool)skipBits:(unsigned long long)arg1;
- (bool)writeBool:(bool)arg1;
- (bool)writeData:(id)arg1 bitWidth:(unsigned long long)arg2;
- (bool)writeUInteger:(unsigned long long)arg1 bitWidth:(unsigned long long)arg2;

@end
