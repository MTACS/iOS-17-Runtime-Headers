
@interface UIAddToReadingListActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (void)_addToReadingList:(id)arg1 withTitle:(id)arg2;
- (id)_heroActionTitle;
- (bool)_showsInSystemActionGroup;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
