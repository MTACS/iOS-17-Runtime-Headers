
@interface HMDSelectedAudioParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDAudioCodecGroup * _codecGroup;
    HMDAudioCodecParameters * _codecParameters;
    NSNumber * _comfortNoiseEnabled;
    HMDSelectedRTPParameters * _rtpParameters;
}

@property (nonatomic, readonly, copy) HMDAudioCodecGroup *codecGroup;
@property (nonatomic, readonly, copy) HMDAudioCodecParameters *codecParameters;
@property (nonatomic, readonly, copy) NSNumber *comfortNoiseEnabled;
@property (nonatomic, readonly, copy) HMDSelectedRTPParameters *rtpParameters;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codecGroup;
- (id)codecParameters;
- (id)comfortNoiseEnabled;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodecGroup:(id)arg1 codecParameter:(id)arg2 rtpParameter:(id)arg3 comfortNoiseEnabled:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)rtpParameters;
- (id)tlvData;

@end
