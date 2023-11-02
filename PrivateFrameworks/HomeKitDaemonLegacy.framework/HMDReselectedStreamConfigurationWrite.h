
@interface HMDReselectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDSessionControl * _sessionControl;
    HMDReselectedVideoParameters * _videoParameters;
}

@property (nonatomic, readonly, copy) HMDSessionControl *sessionControl;
@property (readonly, copy) NSData *tlvData;
@property (nonatomic, readonly, copy) HMDReselectedVideoParameters *videoParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionControl:(id)arg1;
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2;
- (id)sessionControl;
- (id)tlvData;
- (id)videoParameters;

@end
