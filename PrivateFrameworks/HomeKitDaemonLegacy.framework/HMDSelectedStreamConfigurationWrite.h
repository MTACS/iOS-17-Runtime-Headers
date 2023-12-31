
@interface HMDSelectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDSelectedAudioParameters * _audioParameters;
    HMDSessionControl * _sessionControl;
    HMDSelectedVideoParameters * _videoParameters;
}

@property (nonatomic, readonly, copy) HMDSelectedAudioParameters *audioParameters;
@property (nonatomic, readonly, copy) HMDSessionControl *sessionControl;
@property (readonly, copy) NSData *tlvData;
@property (nonatomic, readonly, copy) HMDSelectedVideoParameters *videoParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)audioParameters;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionControl:(id)arg1;
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2 audioParameters:(id)arg3;
- (id)sessionControl;
- (id)tlvData;
- (id)videoParameters;

@end
