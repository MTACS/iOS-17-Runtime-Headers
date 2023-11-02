
@interface HMDCameraRecordingAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSNumber * _audioChannelCount;
    NSArray * _audioSampleRates;
    NSArray * _bitRateModes;
    NSNumber * _maxAudioBitRate;
}

@property (nonatomic, readonly, copy) NSNumber *audioChannelCount;
@property (nonatomic, readonly, copy) NSArray *audioSampleRates;
@property (nonatomic, readonly, copy) NSArray *bitRateModes;
@property (nonatomic, readonly, copy) NSNumber *maxAudioBitRate;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)audioChannelCount;
- (id)audioSampleRates;
- (id)bitRateModes;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChannelCount:(id)arg1 bitRateModes:(id)arg2 audioSampleRates:(id)arg3 maxAudioBitRate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)maxAudioBitRate;
- (id)tlvData;

@end
