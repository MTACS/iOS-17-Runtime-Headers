
@interface UIAddToHomeScreenActivity : UIActivity {
    UIViewController * _addToHomeScreenViewController;
}

+ (unsigned long long)_xpcAttributes;

- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;

@end
