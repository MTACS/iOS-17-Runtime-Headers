
@interface ICSCompressedInputStream : NSObject <ICSInputByteStream> {
    unsigned long long  bufLen;
    unsigned long long  bufPos;
    void * buffer;
    bool  didFinalize;
    bool  finalBlock;
    NSData * rawData;
    struct { 
        char *dst_ptr; 
        unsigned long long dst_size; 
        char *src_ptr; 
        unsigned long long src_size; 
        void *state; 
    }  underStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)eos;
- (id)initWithData:(id)arg1;
- (BOOL)read;

@end
