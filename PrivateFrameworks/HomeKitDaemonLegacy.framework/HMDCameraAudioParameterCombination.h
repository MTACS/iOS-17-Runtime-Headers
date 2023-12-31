
@interface HMDCameraAudioParameterCombination : HMFObject {
    HMDBitRateSetting * _bitrateSetting;
    HMDAudioCodecGroup * _codecGroupType;
    NSNumber * _maximumBitrate;
    NSNumber * _minimumBitrate;
    NSNumber * _rtcpInterval;
    NSNumber * _rtpPTime;
    HMDAudioSampleRate * _sampleRate;
}

@property (nonatomic, readonly) HMDBitRateSetting *bitrateSetting;
@property (nonatomic, readonly) HMDAudioCodecGroup *codecGroupType;
@property (nonatomic, readonly) NSNumber *maximumBitrate;
@property (nonatomic, readonly) NSNumber *minimumBitrate;
@property (nonatomic, readonly) NSNumber *rtcpInterval;
@property (nonatomic, readonly) NSNumber *rtpPTime;
@property (nonatomic, readonly) HMDAudioSampleRate *sampleRate;

- (void).cxx_destruct;
- (id)bitrateSetting;
- (id)codecGroupType;
- (id)description;
- (id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3;
- (id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3 maximumBitrate:(id)arg4 minimumBitrate:(id)arg5 rtcpInterval:(id)arg6 rtpPtime:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)maximumBitrate;
- (id)minimumBitrate;
- (id)rtcpInterval;
- (id)rtpPTime;
- (id)sampleRate;

@end
