
@interface HealthExperienceUI.ProfileViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void navigationBarTitleView;
    void providedHealthStore;
    void restorationRowToLoad;
}

- (void).cxx_destruct;
- (void)dismissProfile:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
