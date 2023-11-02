
@interface HealthExperienceUI.HealthDetailsViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void $__lazy_storage_$_healthDetailsDataSource;
    void healthStore;
    void isInEditMode;
    void shouldSaveItems;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)resetCharacteristics;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
