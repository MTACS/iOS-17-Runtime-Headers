
@interface AXUISettingsBaseListController : AXUISettingsSetupCapableListController {
    NSArray * _detailItems;
    bool  _detailItemsHidden;
}

@property (nonatomic, retain) NSArray *detailItems;
@property (nonatomic) bool detailItemsHidden;

- (void).cxx_destruct;
- (id)cellForSpecifier:(id)arg1;
- (id)cellForSpecifierID:(id)arg1;
- (id)detailItems;
- (bool)detailItemsHidden;
- (void)setDetailItems:(id)arg1;
- (void)setDetailItemsHidden:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)showController:(id)arg1 withSpecifier:(id)arg2;
- (id)specifierForIndexPath:(id)arg1;
- (id)specifierForKey:(id)arg1;
- (id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)arg1 ifHidden:(bool)arg2;
- (void)updateTableCheckedSelection:(id)arg1;
- (void)updateVisibleCellsWithCheckedSelection:(id)arg1;

@end
