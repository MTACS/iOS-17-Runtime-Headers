
@interface UICopyToPasteboardActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (long long)_defaultSortGroup;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)pasteboard;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
