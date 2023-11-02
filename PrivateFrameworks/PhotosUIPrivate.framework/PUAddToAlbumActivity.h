
@interface PUAddToAlbumActivity : PXActivity {
    UIViewController * _presenterViewController;
}

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityBundleImageConfiguration;
- (id)_albumPickerViewControllerWithAssets:(id)arg1;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_systemImageName;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end
