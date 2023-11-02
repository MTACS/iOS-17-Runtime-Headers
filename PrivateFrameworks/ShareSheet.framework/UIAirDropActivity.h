
@interface UIAirDropActivity : UIActivity

+ (struct CGSize { double x1; double x2; })_thumbnailSize;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (bool)canPerformActivityWithItemClasses:(id)arg1;
+ (id)classNamesForItems:(id)arg1;
+ (id)classesForClassNames:(id)arg1;

- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_allowsAutoCancelOnDismiss;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;

@end
