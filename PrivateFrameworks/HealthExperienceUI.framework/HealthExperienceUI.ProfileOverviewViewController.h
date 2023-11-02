
@interface HealthExperienceUI.ProfileOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HealthExperienceUI.VibrantNavigationBarItemsPresenting> {
    void gradientColorProvider;
    void gradientSubscriber;
    void gradientView;
    void navigationBarTitleView;
    void profileAllDataDataSource;
    void providedHealthExperienceStore;
    void providedHealthStore;
    void syncHandler;
}

- (void).cxx_destruct;
- (void)backButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
