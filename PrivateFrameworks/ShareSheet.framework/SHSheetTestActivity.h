
@interface SHSheetTestActivity : UIActivity {
    NSArray * _activityItems;
}

@property (nonatomic, copy) NSArray *activityItems;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityItems;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityItems:(id)arg1;

@end
