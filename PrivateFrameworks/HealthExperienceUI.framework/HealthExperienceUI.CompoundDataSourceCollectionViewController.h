
@interface HealthExperienceUI.CompoundDataSourceCollectionViewController : UICollectionViewController {
    void $__lazy_storage_$_dataSource;
    void dataSourceAdaptor;
    void dataSourceProvider;
    void usesAdaptiveMargins;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observedTraitsDidChangeWithTraitEnvironment:(id)arg1 previousTraitCollection:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
