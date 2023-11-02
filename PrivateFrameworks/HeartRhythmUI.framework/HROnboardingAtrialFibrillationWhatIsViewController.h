
@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController <HKAdaptiveModalPresented> {
    HRVideoPlayerView * _videoPlayerView;
}

@property (nonatomic, retain) HRVideoPlayerView *videoPlayerView;

- (void).cxx_destruct;
- (long long)accessibilityGroupID;
- (id)bodyString;
- (id)buttonTitleString;
- (id)createHeroView;
- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (void)setUpUI;
- (void)setVideoPlayerView:(id)arg1;
- (long long)stackedButtonViewLastButtonMode;
- (id)titleString;
- (id)videoPlayerView;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
