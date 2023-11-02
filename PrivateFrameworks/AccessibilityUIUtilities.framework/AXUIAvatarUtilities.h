
@interface AXUIAvatarUtilities : NSObject

+ (id)_axStringForPresetCategory:(long long)arg1;
+ (bool)_shouldSkipPresetCategory:(long long)arg1;
+ (bool)avatarFrameworksArePresent;
+ (id)customContentForAvatarWithRecord:(id)arg1;
+ (id)customContentForMemoji:(id)arg1;
+ (id)descriptionForAnimoji:(id)arg1;
+ (id)descriptionForAvatarWithRecord:(id)arg1 includeVideoPrefix:(bool)arg2;
+ (id)descriptionForMemoji:(id)arg1;
+ (void)performValidations;

@end
