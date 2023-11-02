
@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDCameraRecordingAudioCodecConfiguration * _audioConfiguration;
    HMDCameraRecordingGeneralConfiguration * _generalConfiguration;
    HMDCameraRecordingVideoCodecConfiguration * _videoConfiguration;
}

@property (nonatomic, readonly, copy) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration;
@property (nonatomic, readonly, copy) HMDCameraRecordingGeneralConfiguration *generalConfiguration;
@property (readonly, copy) NSData *tlvData;
@property (nonatomic, readonly, copy) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)audioConfiguration;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)generalConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3;
- (id)tlvData;
- (id)videoConfiguration;

@end
