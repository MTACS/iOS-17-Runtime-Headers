
@interface DKDAAPWriter : NSObject {
    NSMutableArray * _containerStack;
    NSError * _error;
    NSOutputStream * _outputStream;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSMutableArray *containerStack;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)_performWriteWithBuffer:(id /* block */)arg1;
- (void)_writeDataToOutputStream:(id)arg1;
- (void)close;
- (id)containerStack;
- (void)endContainerWithCode:(unsigned int)arg1;
- (id)error;
- (id)initWithStream:(id)arg1;
- (id)outputStream;
- (void)startContainerWithCode:(unsigned int)arg1;
- (unsigned long long)state;
- (void)writeBytes:(char *)arg1 ofLength:(unsigned int)arg2 withCode:(unsigned int)arg3;
- (void)writeCString:(const char *)arg1 withCode:(unsigned int)arg2;
- (void)writeContainerData:(id)arg1;
- (void)writeData:(id)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt16:(short)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt32:(int)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt64:(long long)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt8:(BOOL)arg1 withCode:(unsigned int)arg2;
- (void)writeString:(id)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt16:(unsigned short)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt32:(unsigned int)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt64:(unsigned long long)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt8:(unsigned char)arg1 withCode:(unsigned int)arg2;

@end
