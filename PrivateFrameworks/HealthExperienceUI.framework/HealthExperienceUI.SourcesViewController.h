
@interface HealthExperienceUI.SourcesViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HKAdaptiveModalPresented> {
    void profileName;
    void sourceType;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidLoad;

@end
