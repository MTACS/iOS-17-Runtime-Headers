
@interface BUZipInflateReadChannel : NSObject <BUStreamReadChannel> {
    unsigned int  _CRC;
    char * _outBuffer;
    unsigned long long  _outBufferSize;
    <BUStreamReadChannel> * _readChannel;
    unsigned long long  _remainingUncompressedSize;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _stream;
    bool  _validateCRC;
}

@property (nonatomic) unsigned int CRC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long outBufferSize;
@property (nonatomic, retain) <BUStreamReadChannel> *readChannel;
@property (nonatomic) unsigned long long remainingUncompressedSize;
@property (readonly) Class superclass;
@property (nonatomic) bool validateCRC;

+ (void)test_setMaxBufferSize:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned int)CRC;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithHandler:(id /* block */)arg1 error:(id)arg2;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned int)arg3 validateCRC:(bool)arg4;
- (unsigned long long)outBufferSize;
- (void)prepareBuffer;
- (bool)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned int*)arg3 isDone:(bool)arg4 handler:(id /* block */)arg5;
- (id)readChannel;
- (void)readWithHandler:(id /* block */)arg1;
- (unsigned long long)remainingUncompressedSize;
- (void)setCRC:(unsigned int)arg1;
- (void)setOutBufferSize:(unsigned long long)arg1;
- (void)setReadChannel:(id)arg1;
- (void)setRemainingUncompressedSize:(unsigned long long)arg1;
- (void)setValidateCRC:(bool)arg1;
- (bool)validateCRC;

@end
