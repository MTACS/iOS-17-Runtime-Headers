
@interface STAllowanceProgressGroupSpecifierProvider : STUsageGroupSpecifierProvider <STAllowanceDetailListControllerDelegate> {
    PSSpecifier * _addAllowanceSpecifier;
    NSSet * _budgetedIdentifiers;
    STUsageItem * _usageItem;
}

@property (readonly, copy) PSSpecifier *addAllowanceSpecifier;
@property (nonatomic, readonly, copy) NSSet *budgetedIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) STUsageItem *usageItem;

- (void).cxx_destruct;
- (id)_allowanceDetailText:(id)arg1;
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_showAllowanceDetailListController:(id)arg1;
- (void)_showAllowanceSetupListController:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (id)addAllowanceSpecifier;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)allowanceDetailControllerDidCancel:(id)arg1;
- (id)budgetedIdentifiers;
- (id)init;
- (id)initWithBudgetedIdentifiers:(id)arg1 usageItem:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (id)usageItem;

@end
