
@interface PUMoveAssetsToPersonalLibraryActivity : PXActivity {
    UIViewController * _presenterViewController;
}

- (void).cxx_destruct;
- (id)_multiContributorConfirmationAlertControllerForAssets:(id)arg1 contributorName:(id)arg2 completion:(id /* block */)arg3;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end
