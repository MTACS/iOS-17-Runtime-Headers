
@interface GameCenterUI.SettingsContainerViewController : UIViewController <AAUISignInControllerDelegate, CNPhotoPickerViewControllerDelegate, GKOnboardingFlowDelegate, PSController> {
    void _rootController;
    void _specifier;
    void childViewController;
    void contactsIntegrationInitiator;
    void metricsHandler;
    void onboardingNavigationController;
    void overlayView;
    void scrollView;
    void settings;
    void startTime;
    void viewDidLayoutSubviewsCallback;
}

@property (nonatomic, retain) PSRootController *_rootController;
@property (nonatomic, retain) PSSpecifier *_specifier;

- (void).cxx_destruct;
- (id)_rootController;
- (id)_specifier;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onboardingFlowFinishedWithAction:(unsigned long long)arg1;
- (void)openAvatarEditor;
- (void)openPlayerProfileView;
- (id)parentController;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)set_rootController:(id)arg1;
- (void)set_specifier:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;
- (id)specifier;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
