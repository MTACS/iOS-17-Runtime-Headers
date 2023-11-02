
@interface wspSetBindingsIn : NSObject {
    wspContext * _wctx;
    struct { 
        unsigned int msgid; 
        unsigned int status; 
        unsigned int checksum; 
        unsigned int reserved2; 
    }  msghdr;
}

@property (retain) wspContext *wctx;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithCtx:(id)arg1;
- (void)setWctx:(id)arg1;
- (id)wctx;

@end
