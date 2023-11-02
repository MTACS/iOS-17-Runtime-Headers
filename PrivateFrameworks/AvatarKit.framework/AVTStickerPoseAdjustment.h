
@interface AVTStickerPoseAdjustment : NSObject {
    AVTAvatarPose * _pose;
    long long  _presetCategory;
    NSString * _presetIdentifier;
}

@property (nonatomic, retain) AVTAvatarPose *pose;
@property (nonatomic) long long presetCategory;
@property (nonatomic, retain) NSString *presetIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)pose;
- (id)poseByApplyingToPose:(id)arg1 forAvatar:(id)arg2;
- (long long)presetCategory;
- (id)presetIdentifier;
- (void)setPose:(id)arg1;
- (void)setPresetCategory:(long long)arg1;
- (void)setPresetIdentifier:(id)arg1;

@end
