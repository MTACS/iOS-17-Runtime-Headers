
@interface HMDCameraRecordingSupportedAudioConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSArray * _codecConfigurations;
}

@property (nonatomic, readonly, copy) NSArray *codecConfigurations;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codecConfigurations;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodecConfigurations:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;

@end
