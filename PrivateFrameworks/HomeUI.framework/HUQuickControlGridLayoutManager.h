
@interface HUQuickControlGridLayoutManager : NSObject {
    UICollectionView * _collectionView;
    HFItemManager<HUQuickControlCollectionItemManaging> * _itemManager;
    HUQuickControlCollectionViewControllerLayoutOptions * _layoutOptions;
    NSMutableArray * _sectionSettingsArray;
}

@property (nonatomic, readonly) NSArray *collectionSectionSettings;
@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, retain) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager;
@property (nonatomic, retain) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (nonatomic, retain) NSMutableArray *sectionSettingsArray;
@property (nonatomic, readonly) long long viewSizeSubclass;

- (void).cxx_destruct;
- (unsigned long long)_mostImportantItemTypeForSection:(unsigned long long)arg1;
- (id)_settingsForSectionNumber:(unsigned long long)arg1 sectionIdentifier:(id)arg2 layoutOptions:(id)arg3;
- (id)_viewProfileClassesForSection:(unsigned long long)arg1;
- (id)collectionSectionSettings;
- (id)collectionView;
- (void)generateSectionSettings;
- (id)init;
- (id)initWithCollectionView:(id)arg1 itemManager:(id)arg2 layoutOptions:(id)arg3;
- (double)interItemSpacingForItemSize:(unsigned long long)arg1 layoutOptions:(id)arg2;
- (id)itemManager;
- (unsigned long long)itemSizeForSection:(unsigned long long)arg1;
- (id)layoutOptions;
- (unsigned long long)numberOfColumnsInSection:(unsigned long long)arg1;
- (id)sectionSettingsArray;
- (double)sectionTopPaddingInSection:(unsigned long long)arg1 withLayoutOptions:(id)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setItemManager:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setSectionSettingsArray:(id)arg1;
- (unsigned long long)titlePositionForSection:(unsigned long long)arg1;
- (long long)viewSizeSubclass;

@end
