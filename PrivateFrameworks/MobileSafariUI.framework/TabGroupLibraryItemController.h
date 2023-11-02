
@interface TabGroupLibraryItemController : LibraryItemController {
    WBTab * _tab;
    WBTabGroup * _tabGroup;
}

@property (nonatomic, readonly) WBTab *tab;
@property (nonatomic, readonly) WBTabGroup *tabGroup;
@property (getter=isTabGroupSynced, nonatomic, readonly) bool tabGroupSynced;

- (void).cxx_destruct;
- (bool)_sessionContainsLocalTabs:(id)arg1;
- (bool)_sessionContainsTabDocuments:(id)arg1;
- (bool)_sessionContainsTabGroup:(id)arg1;
- (bool)_shouldHidePrivateBrowsingVerticalTabs;
- (id)accessibilityIdentifier;
- (id)accessories;
- (bool)allowsMoveOperation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)didSelectItem;
- (id)dragItems;
- (long long)dropIntentForSession:(id)arg1;
- (unsigned long long)dropOperationForSession:(id)arg1;
- (bool)hasSubitems;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1 sectionController:(id)arg2 tabGroup:(id)arg3 tab:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isExpanded;
- (bool)isSelected;
- (bool)isSpringLoaded;
- (bool)isTabGroupSynced;
- (void)performDropWithProposal:(id)arg1 session:(id)arg2;
- (bool)shouldPersistSelection;
- (id)subitems;
- (id)swipeActionsConfiguration;
- (id)tab;
- (id)tabGroup;
- (id)tabGroupProvider;
- (void)updateListContentConfiguration:(id)arg1;
- (void)willToggleExpansionState;

@end
