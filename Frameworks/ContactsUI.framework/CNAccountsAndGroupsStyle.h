
@interface CNAccountsAndGroupsStyle : NSObject

+ (id)styleForTraitCollection:(id)arg1;

- (id)backgroundColor;
- (long long)buttonBehavior;
- (id)cellAccessoriesForContextMenuPreviewForItem:(id)arg1;
- (id)cellAccessoriesForItem:(id)arg1;
- (id /* block */)cellConfigurationUpdateHandler;
- (bool)isInset;
- (id)parentCellAccessories;
- (id)parentCellConfigurationWithText:(id)arg1;
- (id)sectionConfigurationForLayoutEnvironment:(id)arg1 withLeadingActionsProvider:(id /* block */)arg2 withTrailingActionsProvider:(id /* block */)arg3 hasHeader:(bool)arg4;
- (bool)shouldShowCellSelection;

@end
