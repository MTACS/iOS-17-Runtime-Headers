
@interface AMDByteBuffer : NSObject {
    unsigned long long  _fileSize;
    NSInputStream * _inputStream;
    unsigned long long  _readPosition;
}

@property unsigned long long fileSize;
@property (nonatomic, retain) NSInputStream *inputStream;
@property unsigned long long readPosition;

- (void).cxx_destruct;
- (void)copyDataOfLength:(unsigned long long)arg1 toFile:(id)arg2 isCompressed:(bool)arg3 error:(id*)arg4;
- (unsigned long long)fileSize;
- (unsigned char)getByteWithError:(id*)arg1;
- (id)getDataOfLength:(int)arg1 error:(id*)arg2;
- (int)getIntWithError:(id*)arg1;
- (long long)getLongWithError:(id*)arg1;
- (short)getShortWithError:(id*)arg1;
- (bool)hasRemaining;
- (id)initWithInputStream:(id)arg1 withFileSize:(unsigned long long)arg2;
- (id)inputStream;
- (unsigned long long)readPosition;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setInputStream:(id)arg1;
- (void)setReadPosition:(unsigned long long)arg1;

@end
