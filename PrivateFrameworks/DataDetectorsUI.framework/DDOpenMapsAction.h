
@interface DDOpenMapsAction : DDAction

+ (bool)actionAvailableForCachedEvent:(id)arg1;
+ (bool)actionAvailableForContact:(id)arg1;

- (bool)canBePerformedByOpeningURL;
- (id)compactTitle;
- (id)iconName;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (id)variantIconName;

@end
