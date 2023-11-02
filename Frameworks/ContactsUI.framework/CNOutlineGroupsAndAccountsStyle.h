
@interface CNOutlineGroupsAndAccountsStyle : CNAccountsAndGroupsStyle

- (id)backgroundColor;
- (long long)buttonBehavior;
- (id /* block */)cellConfigurationUpdateHandler;
- (bool)isInset;
- (id)parentCellConfigurationWithText:(id)arg1;
- (id)sectionConfigurationForLayoutEnvironment:(id)arg1 withLeadingActionsProvider:(id /* block */)arg2 withTrailingActionsProvider:(id /* block */)arg3 hasHeader:(bool)arg4;

@end
