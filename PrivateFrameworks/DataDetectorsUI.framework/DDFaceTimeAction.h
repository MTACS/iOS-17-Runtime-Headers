
@interface DDFaceTimeAction : DDFaceTimeAudioAction

+ (bool)isAvailable;
+ (id)matchingScheme;

- (id)dialRequest;
- (id)iconName;
- (id)localizedName;
- (id)notificationTitle;

@end
