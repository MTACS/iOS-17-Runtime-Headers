
@interface HealthExperienceUI.CategoryViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void categoryViewDataSource;
    void gradientColorProvider;
    void gradientSubscriber;
    void gradientView;
    void healthExperienceStore;
    void navigationBarStyle;
    void providedHealthStore;
    void typeGroup;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)observedTraitsDidChangeWithTraitEnvironment:(id)arg1 previousTraitCollection:(id)arg2;
- (void)restoreUserActivityState:(id)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
