
@interface SUIShareActivity : UIActivity

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (long long)_defaultSortGroup;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (bool)ss_shouldDismissHostsPresentationBeforePerforming;
- (bool)ss_shouldExecuteInShareSheet;

@end
