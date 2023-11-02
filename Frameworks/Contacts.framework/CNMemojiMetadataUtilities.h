
@interface CNMemojiMetadataUtilities : NSObject

+ (id)avatarRecordForIdentifier:(id)arg1;
+ (id)dataForMemojiMetadata:(id)arg1;
+ (id)dataForMemojiMetadata:(id)arg1 backgroundColorDescription:(id)arg2 cropTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)dataForPoseConfiguration:(id)arg1;
+ (id)memojiMetadataDataForAvatarRecord:(id)arg1 poseConfiguration:(id)arg2 backgroundColorDescription:(id)arg3;
+ (id)memojiMetadataDataForAvatarRecord:(id)arg1 poseConfiguration:(id)arg2 backgroundColorDescription:(id)arg3 cropTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
+ (id)memojiMetadataDataForAvatarRecordIdentifier:(id)arg1 poseConfigurationData:(id)arg2 backgroundColorDescription:(id)arg3;
+ (id)memojiMetadataDataForAvatarRecordIdentifier:(id)arg1 poseConfigurationData:(id)arg2 backgroundColorDescription:(id)arg3 cropTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
+ (id)memojiMetadataFromData:(id)arg1;
+ (id)os_log;
+ (id)physicsStatesDictionaryRepresentationForPose:(id)arg1;
+ (id)poseConfigurationForData:(id)arg1 withAvatarRecord:(id)arg2;
+ (id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2 pose:(id)arg3;
+ (id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2 stickerPack:(id)arg3;

@end
