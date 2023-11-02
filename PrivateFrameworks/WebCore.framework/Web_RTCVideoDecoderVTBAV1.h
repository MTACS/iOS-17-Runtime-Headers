
@interface Web_RTCVideoDecoderVTBAV1 : NSObject {
    struct BlockPtr<void (__CVBuffer *, long long, long long)>="m_block"@? {}  _callback;
    struct RetainPtr<OpaqueVTDecompressionSession *> { 
        void *m_ptr; 
    }  _decompressionSession;
    int  _error;
    int  _height;
    bool  _shouldCheckFormat;
    struct RetainPtr<const opaqueCMFormatDescription *> { 
        void *m_ptr; 
    }  _videoFormat;
    int  _width;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureDecompressionSession;
- (void)dealloc;
- (long long)decodeData:(const char *)arg1 size:(unsigned long long)arg2 timeStamp:(long long)arg3;
- (void)destroyDecompressionSession;
- (void)flush;
- (id)init;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (void)setCallback:(id /* block */)arg1;
- (void)setError:(int)arg1;
- (void)setWidth:(unsigned short)arg1 height:(unsigned short)arg2;

@end
