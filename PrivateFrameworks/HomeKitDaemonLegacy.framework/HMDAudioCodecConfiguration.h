
@interface HMDAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDAudioCodecParameters * _audioCodecParameters;
    HMDAudioCodecGroup * _codecGroup;
}

@property (nonatomic, readonly, copy) HMDAudioCodecParameters *audioCodecParameters;
@property (nonatomic, readonly, copy) HMDAudioCodecGroup *codecGroup;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)audioCodecParameters;
- (id)codecGroup;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioCodecGroup:(id)arg1 codecParameter:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;

@end
