
@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider {
    NSDictionary * _allowancesByActiveBudgetedIdentifier;
    unsigned long long  _selectedItemType;
}

@property (nonatomic, copy) NSDictionary *allowancesByActiveBudgetedIdentifier;
@property (nonatomic) unsigned long long selectedItemType;

- (void).cxx_destruct;
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)allowanceIconForUsageItem:(id)arg1;
- (id)allowancesByActiveBudgetedIdentifier;
- (id)getUsageItem:(id)arg1;
- (id)init;
- (void)loadActiveBudgetedIdentifiers;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadMostUsedSpecifiers;
- (unsigned long long)selectedItemType;
- (void)setAllowancesByActiveBudgetedIdentifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setSelectedItemType:(unsigned long long)arg1;
- (void)showMostUsedDetailListController:(id)arg1;
- (void)toggleSelectedItemType:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;

@end
