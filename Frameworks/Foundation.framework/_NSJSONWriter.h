
@interface _NSJSONWriter : NSObject {
    NSError * _failure;
    char * dataBuffer;
    unsigned long long  dataBufferLen;
    unsigned long long  dataLen;
    bool  freeDataBuffer;
    int  kind;
    NSOutputStream * outputStream;
    char * tempBuffer;
    unsigned long long  tempBufferLen;
    long long  totalDataWritten;
}

@property (retain) NSError *failure;

- (bool)appendString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2;
- (void)dealloc;
- (id)failure;
- (id)init;
- (void)setFailure:(id)arg1;
- (long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3;

@end
