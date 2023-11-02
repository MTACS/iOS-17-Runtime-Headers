
@interface HMDCameraRecordingVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSNumber * _bitRate;
    NSNumber * _iFrameInterval;
    NSArray * _levels;
    NSArray * _profiles;
}

@property (nonatomic, readonly, copy) NSNumber *bitRate;
@property (nonatomic, readonly, copy) NSNumber *iFrameInterval;
@property (nonatomic, readonly, copy) NSArray *levels;
@property (nonatomic, readonly, copy) NSArray *profiles;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)bitRate;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)iFrameInterval;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 bitRate:(id)arg3 iFrameInterval:(id)arg4;
- (id)levels;
- (id)profiles;
- (id)tlvData;

@end
