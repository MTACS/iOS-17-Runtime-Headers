
@protocol RTCVideoEncoder <NSObject>

@required

- (long long)encode:(WK_RTCVideoFrame *)arg1 codecSpecificInfo:(id <RTCCodecSpecificInfo>)arg2 frameTypes:(NSArray *)arg3;
- (NSString *)implementationName;
- (long long)releaseEncoder;
- (WK_RTCVideoEncoderQpThresholds *)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, WK_RTCEncodedImage *, <RTCCodecSpecificInfo> *, WK_RTCRtpFragmentationHeader *, void*
- (long long)startEncodeWithSettings:(WK_RTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;

@end
