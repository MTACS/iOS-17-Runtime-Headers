
@interface WK_RTCLocalVideoH264H265VP9Decoder : NSObject {
    WK_RTCVideoDecoderH264 * m_h264Decoder;
    WK_RTCVideoDecoderH265 * m_h265Decoder;
    WK_RTCVideoDecoderVTBVP9 * m_vp9Decoder;
}

- (void).cxx_destruct;
- (long long)decodeData:(const char *)arg1 size:(unsigned long long)arg2 timeStamp:(long long)arg3;
- (void)flush;
- (id)initH264DecoderWithCallback:(id /* block */)arg1;
- (id)initH265DecoderWithCallback:(id /* block */)arg1;
- (id)initVP9DecoderWithCallback:(id /* block */)arg1;
- (long long)releaseDecoder;
- (long long)setFormat:(const char *)arg1 size:(unsigned long long)arg2 width:(unsigned short)arg3 height:(unsigned short)arg4;
- (void)setWidth:(unsigned short)arg1 height:(unsigned short)arg2;

@end
