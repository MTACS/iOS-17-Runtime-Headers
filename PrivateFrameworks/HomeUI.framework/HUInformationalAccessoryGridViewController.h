
@interface HUInformationalAccessoryGridViewController : HUItemCollectionViewController {
    void module;
    void moduleController;
    void visibleAccessories;
}

@property (nonatomic, copy) NSSet *visibleAccessories;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)init;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithVisibleAccessories:(id)arg1;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (void)setVisibleAccessories:(id)arg1;
- (void)viewDidLoad;
- (id)visibleAccessories;

@end
