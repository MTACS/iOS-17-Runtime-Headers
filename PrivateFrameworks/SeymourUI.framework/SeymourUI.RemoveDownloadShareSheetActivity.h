
@interface SeymourUI.RemoveDownloadShareSheetActivity : UIActivity {
    void assetClient;
    void workoutIdentifier;
}

@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
