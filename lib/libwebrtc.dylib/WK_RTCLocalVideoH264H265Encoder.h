
@interface WK_RTCLocalVideoH264H265Encoder : NSObject {
    WK_RTCVideoEncoderH264 * m_h264Encoder;
    WK_RTCVideoEncoderH265 * m_h265Encoder;
}

- (void).cxx_destruct;
- (int)codecType;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (void)flush;
- (id)initWithCodecInfo:(id)arg1;
- (long long)releaseEncoder;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(id /* block */)arg1;
- (void)setDescriptionCallback:(id /* block */)arg1;
- (void)setLowLatency:(bool)arg1;
- (void)setUseAnnexB:(bool)arg1;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end
