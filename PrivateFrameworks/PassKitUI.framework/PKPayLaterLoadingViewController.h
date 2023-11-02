
@interface PKPayLaterLoadingViewController : PKPayLaterSetupViewController {
    bool  _didRequestNextViewController;
    double  _minimumDelayNanoSeconds;
}

- (void)_updateHeaderSubtitleWithAltTextIfNecessary;
- (id)additionalAnalyticsDictionary;
- (id)initWithSetupFlowController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
