
@interface CKSaveToPhotosActivity : UIActivity {
    CKMediaObject * _mediaObject;
    UIViewController * _presenterViewController;
}

@property (nonatomic, readonly) CKMediaObject *mediaObject;
@property (nonatomic, readonly) UIViewController *presenterViewController;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithMediaObject:(id)arg1 presenterViewController:(id)arg2;
- (id)mediaObject;
- (void)performActivity;
- (id)presenterViewController;

@end
