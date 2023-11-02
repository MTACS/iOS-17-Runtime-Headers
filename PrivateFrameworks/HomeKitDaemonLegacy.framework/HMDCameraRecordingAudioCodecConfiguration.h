
@interface HMDCameraRecordingAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDCameraRecordingAudioCodec * _codec;
    HMDCameraRecordingAudioCodecParameters * _parameters;
}

@property (nonatomic, readonly, copy) HMDCameraRecordingAudioCodec *codec;
@property (nonatomic, readonly, copy) HMDCameraRecordingAudioCodecParameters *parameters;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codec;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioCodec:(id)arg1 codecParameters:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)tlvData;

@end
