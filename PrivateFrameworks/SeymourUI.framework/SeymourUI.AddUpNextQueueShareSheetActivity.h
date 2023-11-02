
@interface SeymourUI.AddUpNextQueueShareSheetActivity : UIActivity {
    void title;
    void upNextQueueClient;
    void upNextQueueItems;
    void workoutActivityType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workoutDetail;
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

@end
