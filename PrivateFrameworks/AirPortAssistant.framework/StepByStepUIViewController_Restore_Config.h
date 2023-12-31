
@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {
    bool  dontRestore;
    UIView * dontRestoreRecommendationContainerView;
    UILabel * dontRestoreRecommendationLabel;
    UIView * restoreRecommendationContainerView;
    UILabel * restoreRecommendationLabel;
}

@property (nonatomic, retain) UIView *dontRestoreRecommendationContainerView;
@property (nonatomic, retain) UIView *restoreRecommendationContainerView;

- (void)dealloc;
- (id)dontRestoreRecommendationContainerView;
- (void)loadView;
- (id)restoreRecommendationContainerView;
- (void)setDontRestoreRecommendationContainerView:(id)arg1;
- (void)setRestoreRecommendationContainerView:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (void)viewWillAppear:(bool)arg1;

@end
