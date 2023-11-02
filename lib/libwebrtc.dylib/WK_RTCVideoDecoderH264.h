
@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {
    id /* block */  _callback;
    struct OpaqueVTDecompressionSession { } * _decompressionSession;
    int  _error;
    struct OpaqueCMMemoryPool { } * _memoryPool;
    bool  _useAVC;
    struct opaqueCMFormatDescription { } * _videoFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureDecompressionSession;
- (void)dealloc;
- (long long)decode:(id)arg1 missingFrames:(bool)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (long long)decodeData:(const char *)arg1 size:(unsigned long long)arg2 timeStamp:(long long)arg3;
- (void)destroyDecompressionSession;
- (void)flush;
- (id)implementationName;
- (id)init;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (long long)setAVCFormat:(const char *)arg1 size:(unsigned long long)arg2 width:(unsigned short)arg3 height:(unsigned short)arg4;
- (void)setCallback:(id /* block */)arg1;
- (void)setError:(int)arg1;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (long long)startDecodeWithNumberOfCores:(int)arg1;

@end
