
@interface AVTStickerConfiguration : NSObject <AVTCacheableResourceScope> {
    NSString * _assetsPath;
    AVTAvatarBodyPose * _bodyPose;
    AVTStickerCamera * _camera;
    NSDictionary * _configurationDictionary;
    bool  _hasLoadedFromConfiguration;
    NSNumber * _legacySizeOption;
    NSString * _localizedName;
    NSArray * _morpherOverrides;
    NSString * _name;
    AVTAvatarPhysicalizedPose * _physicalizedPose;
    NSArray * _poseAdjustments;
    NSArray * _presetOverrides;
    NSArray * _props;
    NSArray * _shaderModifiers;
    NSString * _stickerPack;
    unsigned long long  _stickerVersion;
}

@property (nonatomic, retain) NSString *assetsPath;
@property (nonatomic, retain) AVTAvatarBodyPose *bodyPose;
@property (nonatomic, retain) AVTStickerCamera *camera;
@property (nonatomic, retain) NSDictionary *configurationDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emojiRepresentation;
@property (nonatomic) bool hasLoadedFromConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *morpherOverrides;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) AVTAvatarPhysicalizedPose *physicalizedPose;
@property (nonatomic, retain) NSArray *poseAdjustments;
@property (nonatomic, readonly) AVTAvatarPoseAnimation *poseAnimation;
@property (nonatomic, readonly) bool preRendered;
@property (nonatomic, readonly) NSArray *presetOverrides;
@property (nonatomic, retain) NSArray *props;
@property (nonatomic, retain) NSArray *shaderModifiers;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSString *stickerPack;
@property (nonatomic, readonly) unsigned long long stickerVersion;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)allStickerPackNames;
+ (id)availableStickerNamesForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2;
+ (id)availableStickerNamesForMemojiInStickerPack:(id)arg1;
+ (id)stickerConfigurationForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2 stickerName:(id)arg3;
+ (id)stickerConfigurationForMemojiInStickerPack:(id)arg1 stickerName:(id)arg2;
+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1;
+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2;
+ (id)stickerConfigurationsForMemoji;
+ (id)stickerConfigurationsForMemojiInStickerPack:(id)arg1;
+ (id)stickerConfigurationsForPuppetNamed:(id)arg1;
+ (id)unavailableAnimojiNamesForStickerPack:(id)arg1;

- (void).cxx_destruct;
- (void)_updateDictionary:(id)arg1 withTargetPath:(id)arg2;
- (id)assetsPath;
- (id)bodyPose;
- (id)camera;
- (id)configurationDictionary;
- (bool)definesPoseOnly;
- (id)description;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)emojiRepresentation;
- (id)framingMode;
- (bool)hasLoadedFromConfiguration;
- (bool)hasProps;
- (id)initWithConfigDictionary:(id)arg1 assetsPath:(id)arg2 forStickerPack:(id)arg3;
- (id)initWithConfigurationAtPath:(id)arg1;
- (id)initWithConfigurationAtPath:(id)arg1 forStickerPack:(id)arg2;
- (id)initWithName:(id)arg1 pose:(id)arg2 bodyPose:(id)arg3 props:(id)arg4 shaders:(id)arg5 camera:(id)arg6 options:(id)arg7;
- (id)initWithName:(id)arg1 pose:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6;
- (id)initWithName:(id)arg1 poseAnimation:(id)arg2 bodyPose:(id)arg3 props:(id)arg4 shaders:(id)arg5 camera:(id)arg6 options:(id)arg7;
- (id)legacySizeOption;
- (void)loadIfNeeded;
- (id)localizedName;
- (id)morpherOverrides;
- (id)name;
- (id)physicalizedPose;
- (id)poseAdjustments;
- (id)poseAnimation;
- (bool)preRendered;
- (id)presetOverrides;
- (id)props;
- (void)setAssetsPath:(id)arg1;
- (void)setBodyPose:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setConfigurationDictionary:(id)arg1;
- (void)setHasLoadedFromConfiguration:(bool)arg1;
- (void)setPhysicalizedPose:(id)arg1;
- (void)setPoseAdjustments:(id)arg1;
- (void)setProps:(id)arg1;
- (void)setShaderModifiers:(id)arg1;
- (void)setupOptions:(id)arg1;
- (id)shaderModifiers;
- (bool)showsBody;
- (struct CGSize { double x1; double x2; })size;
- (id)stickerPack;
- (unsigned long long)stickerVersion;
- (void)unload;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (unsigned long long)cacheableResourceAssociatedCost;
- (id)cacheableResourceAssociatedIdentifier;

@end
