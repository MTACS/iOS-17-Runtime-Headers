
@interface wspQueryStatusExIn : NSObject {
    unsigned int  _bmk;
    wspContext * _wctx;
    struct { 
        unsigned int msgid; 
        unsigned int status; 
        unsigned int checksum; 
        unsigned int reserved2; 
    }  msghdr;
}

@property unsigned int bmk;
@property (retain) wspContext *wctx;

- (void).cxx_destruct;
- (unsigned int)bmk;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithCtx:(id)arg1;
- (void)setBmk:(unsigned int)arg1;
- (void)setWctx:(id)arg1;
- (id)wctx;

@end
