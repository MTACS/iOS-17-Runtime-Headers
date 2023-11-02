
@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDCameraRecordingVideoCodec * _codec;
    HMDCameraRecordingVideoCodecParameters * _parameters;
    NSArray * _videoAttributes;
}

@property (nonatomic, readonly, copy) HMDCameraRecordingVideoCodec *codec;
@property (nonatomic, readonly, copy) HMDCameraRecordingVideoCodecParameters *parameters;
@property (readonly, copy) NSData *tlvData;
@property (nonatomic, readonly, copy) NSArray *videoAttributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codec;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)tlvData;
- (id)videoAttributes;

@end
