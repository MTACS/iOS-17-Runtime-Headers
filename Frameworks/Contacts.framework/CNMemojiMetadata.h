
@interface CNMemojiMetadata : NSObject <NSCopying, NSSecureCoding> {
    <AVTAvatarRecord> * _avatarRecord;
    NSString * _backgroundColorDescription;
    CNMemojiBackgroundParameters * _backgroundParameters;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _cropTransform;
    AVTAvatarPhysicalizedPose * _pose;
    NSString * _poseName;
}

@property (nonatomic, readonly) AVTAvatar *avatar;
@property (nonatomic, readonly) AVTAvatarDescriptor *avatarDescriptor;
@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, readonly) NSData *avatarRecordData;
@property (nonatomic, readonly) NSString *avatarRecordIdentifier;
@property (nonatomic, readonly) bool avatarRecordIsEditable;
@property (nonatomic, readonly, copy) NSString *backgroundColorDescription;
@property (nonatomic, readonly) CNMemojiBackgroundParameters *backgroundParameters;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } cropTransform;
@property (nonatomic, readonly) AVTAvatarPhysicalizedPose *pose;
@property (nonatomic, readonly) AVTStickerConfiguration *poseConfiguration;
@property (nonatomic, readonly) NSData *poseConfigurationData;
@property (nonatomic, readonly) bool poseHasBody;
@property (nonatomic, readonly, copy) NSString *poseName;

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avatar;
- (id)avatarDescriptor;
- (id)avatarRecord;
- (id)avatarRecordData;
- (id)avatarRecordIdentifier;
- (bool)avatarRecordIsEditable;
- (id)backgroundColorDescription;
- (id)backgroundParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cropTransform;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAvatarRecord:(id)arg1 poseConfiguration:(id)arg2 backgroundColorDescription:(id)arg3;
- (id)initWithAvatarRecord:(id)arg1 poseConfiguration:(id)arg2 backgroundColorDescription:(id)arg3 cropTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)initWithAvatarRecord:(id)arg1 poseName:(id)arg2 pose:(id)arg3 backgroundColorDescription:(id)arg4;
- (id)initWithAvatarRecord:(id)arg1 poseName:(id)arg2 pose:(id)arg3 backgroundColorDescription:(id)arg4 cropTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)initWithBackgroundColorDescription:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pose;
- (id)poseConfiguration;
- (id)poseConfigurationData;
- (bool)poseHasBody;
- (id)poseName;

@end
