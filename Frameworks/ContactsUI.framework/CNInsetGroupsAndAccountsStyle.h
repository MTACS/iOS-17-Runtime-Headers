
@interface CNInsetGroupsAndAccountsStyle : CNAccountsAndGroupsStyle

- (id)backgroundColor;
- (long long)buttonBehavior;
- (id)cellAccessoriesForItem:(id)arg1;
- (id /* block */)cellConfigurationUpdateHandler;
- (bool)isInset;
- (id)parentCellConfigurationWithText:(id)arg1;
- (id)sectionConfigurationForLayoutEnvironment:(id)arg1 withLeadingActionsProvider:(id /* block */)arg2 withTrailingActionsProvider:(id /* block */)arg3 hasHeader:(bool)arg4;
- (bool)shouldShowCellSelection;

@end
