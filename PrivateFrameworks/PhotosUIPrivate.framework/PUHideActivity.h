
@interface PUHideActivity : PXActivity {
    bool  _hiding;
}

+ (long long)activityCategory;

- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)setItemSourceController:(id)arg1;

@end
