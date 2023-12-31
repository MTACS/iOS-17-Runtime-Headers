
@interface HMDSelectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDVideoCodec * _codec;
    HMDVideoCodecParameters * _codecParameters;
    HMDSelectedRTPParameters * _rtpParameters;
    HMDVideoAttributes * _videoAttributes;
}

@property (nonatomic, readonly, copy) HMDVideoCodec *codec;
@property (nonatomic, readonly, copy) HMDVideoCodecParameters *codecParameters;
@property (nonatomic, readonly, copy) HMDSelectedRTPParameters *rtpParameters;
@property (readonly, copy) NSData *tlvData;
@property (nonatomic, readonly, copy) HMDVideoAttributes *videoAttributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codec;
- (id)codecParameters;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodec:(id)arg1 codecParameter:(id)arg2 attribute:(id)arg3 rtpParameter:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)rtpParameters;
- (id)tlvData;
- (id)videoAttributes;

@end
