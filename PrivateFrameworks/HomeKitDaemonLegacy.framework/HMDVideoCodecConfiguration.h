
@interface HMDVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDVideoCodecParameters * _codecParameters;
    NSArray * _videoAttributes;
    HMDVideoCodec * _videoCodec;
}

@property (nonatomic, readonly, copy) HMDVideoCodecParameters *codecParameters;
@property (readonly, copy) NSData *tlvData;
@property (nonatomic, readonly, copy) NSArray *videoAttributes;
@property (nonatomic, readonly, copy) HMDVideoCodec *videoCodec;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codecParameters;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodec:(id)arg1 codecParameters:(id)arg2 attributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;
- (id)videoAttributes;
- (id)videoCodec;

@end
