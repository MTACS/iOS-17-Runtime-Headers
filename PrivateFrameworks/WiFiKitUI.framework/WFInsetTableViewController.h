
@interface WFInsetTableViewController : UITableViewController {
    bool  _reloadDataOnUpdateSectionContentInset;
    bool  _sectionContentInsetInitialized;
}

@property (nonatomic) bool reloadDataOnUpdateSectionContentInset;

- (bool)_isRegularWidth;
- (void)_updateSectionContentInsetWithAnimation:(bool)arg1;
- (id)init;
- (void)loadView;
- (bool)reloadDataOnUpdateSectionContentInset;
- (void)setReloadDataOnUpdateSectionContentInset:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
