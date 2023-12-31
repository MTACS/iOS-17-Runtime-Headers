
@interface HMDCameraVideoParameterCombination : HMFObject {
    HMDH264Level * _level;
    HMDH264Profile * _profile;
    HMDCameraVideoTier * _videoTier;
}

@property (nonatomic, readonly) HMDH264Level *level;
@property (nonatomic, readonly) HMDH264Profile *profile;
@property (nonatomic, readonly) HMDCameraVideoTier *videoTier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProfile:(id)arg1 level:(id)arg2 videoTier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)level;
- (id)profile;
- (id)videoTier;

@end
