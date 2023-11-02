
@interface HUMediaServiceDefaultAccountsItemModuleController : HUItemModuleController {
    <HUMediaServiceDefaultAccountsItemModuleControllerDelegate> * _delegate;
    <HUItemModuleControllerHosting> * _host;
    long long  _selectedMediaServiceIndex;
    bool  _shouldClearSpinnerOnNextUpdate;
}

@property (nonatomic, readonly) <HUMediaServiceDefaultAccountsItemModuleControllerDelegate> *delegate;
@property (nonatomic, readonly) HUMediaServiceDefaultAccountsItemModule *module;
@property (nonatomic) long long selectedMediaServiceIndex;
@property (nonatomic) bool shouldClearSpinnerOnNextUpdate;

- (void).cxx_destruct;
- (void)_clearSpinner;
- (id)_indexPathForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)host;
- (id)initWithModule:(id)arg1 delegate:(id)arg2 host:(id)arg3;
- (long long)selectedMediaServiceIndex;
- (void)setHost:(id)arg1;
- (void)setSelectedMediaServiceIndex:(long long)arg1;
- (void)setShouldClearSpinnerOnNextUpdate:(bool)arg1;
- (bool)shouldClearSpinnerOnNextUpdate;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (id)updateDefaultAccount:(id)arg1;

@end
