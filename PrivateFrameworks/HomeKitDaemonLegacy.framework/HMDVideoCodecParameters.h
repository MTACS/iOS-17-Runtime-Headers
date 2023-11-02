
@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSArray * _h264Profiles;
    NSArray * _levels;
    NSArray * _packetizationModes;
}

@property (nonatomic, readonly, copy) NSArray *h264Profiles;
@property (nonatomic, readonly, copy) NSArray *levels;
@property (nonatomic, readonly, copy) NSArray *packetizationModes;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)h264Profiles;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3;
- (id)levels;
- (id)packetizationModes;
- (id)tlvData;

@end
