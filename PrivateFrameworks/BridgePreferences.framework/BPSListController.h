
@interface BPSListController : PSListController {
    bool  _deferringReloadSpecifiers;
}

@property (nonatomic) bool deferringReloadSpecifiers;

- (bool)_readyToReloadSpecifiers;
- (bool)deferringReloadSpecifiers;
- (void)prepareSpecifiersMetadata;
- (void)reloadSpecifiers;
- (void)setDeferringReloadSpecifiers:(bool)arg1;
- (long long)tableViewStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
