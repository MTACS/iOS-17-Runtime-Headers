
@interface HealthExperienceUI.FeedItemSuggestedActionViewController : UICollectionViewController {
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_layout;
    void dataSourceAdaptor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  suggestedAction;
    void suggestedActionDelegate;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
