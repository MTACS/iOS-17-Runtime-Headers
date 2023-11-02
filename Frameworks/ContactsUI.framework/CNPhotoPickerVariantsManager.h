
@interface CNPhotoPickerVariantsManager : NSObject {
    NSArray * _avatarBackgrounds;
    NSArray * _defaultEmojis;
}

@property (nonatomic, retain) NSArray *avatarBackgrounds;
@property (nonatomic, retain) NSArray *defaultEmojis;

+ (id)avatarBackgroundsFromDictionary:(id)arg1;
+ (id)avatarPoseConfigurationsForAvatarRecord:(id)arg1;
+ (id)colorFromRGBArray:(id)arg1;
+ (id)colorFromRGBString:(id)arg1;
+ (id)colorGradientBackground:(id)arg1;
+ (id)colorVariantWithColorNamed:(id)arg1;
+ (id)compositeColorForTopColor:(id)arg1 bottomColor:(id)arg2;
+ (id)defaultEmojisFromDictionary:(id)arg1;
+ (id)generateGradientColorsByColor;
+ (id)generateMonogramGradientColorsByColor;
+ (id)gradientBackgroundImageForColor:(id)arg1;
+ (id)gradientBackgroundImageForColor:(id)arg1 bottomColor:(id)arg2;
+ (id)gradientStartColor:(id)arg1;
+ (id)monogramColorGradientBackground:(id)arg1;
+ (id)nonAlphaColorForBackgroundColor:(id)arg1;
+ (id)sharingProfileAvatarPoseConfigurationForAvatarRecord:(id)arg1;

- (void).cxx_destruct;
- (id)avatarBackgrounds;
- (id)defaultEmojis;
- (id)init;
- (id)randomColorVariant;
- (void)setAvatarBackgrounds:(id)arg1;
- (void)setDefaultEmojis:(id)arg1;

@end
