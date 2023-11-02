
@interface HealthExperienceUI.SharedProfileOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <CNContactViewControllerDelegate, HealthExperienceUI.TapToRadarButtonDisplaying, HealthExperienceUI.VibrantNavigationBarItemsPresenting> {
    void gradientColorProvider;
    void gradientSubscriber;
    void gradientView;
    void navigationBarTitleView;
    void providedHealthExperienceStore;
    void providedHealthStore;
    void providedPresentation;
    void sharedProfileOverviewDataSource;
}

- (void).cxx_destruct;
- (void)backButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)optionsButtonTapped:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)ttrButtonTapped;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
