
@interface WBSTabOrderManager : NSObject <WBSTabOrderPreferenceProviding> {
    long long  _nextSimplifiedIdentifier;
    <WBSTabOrderPreferenceProviding> * _preferenceProvider;
    NSMutableDictionary * _simplifiedIdentifierMap;
    <WBSTabOrderProvider> * _tabOrderProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimumDelayForRelatingNewBlankTab;
@property (nonatomic, readonly) bool newBlankTabPositionAppliesToAllBlankTabs;
@property (nonatomic, readonly) unsigned long long newTabPosition;
@property (nonatomic, readonly) bool newTabPositionAppliesToSpawnedTabs;
@property <WBSTabOrderPreferenceProviding> *preferenceProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressRelatingNewBlankTabs;
@property (nonatomic) <WBSTabOrderProvider> *tabOrderProvider;
@property (nonatomic, readonly) <WBSOrderedTab> *tabToSelectBeforeClosingSelectedTab;

- (void).cxx_destruct;
- (unsigned long long)_indexOfLastRelatedTab;
- (unsigned long long)_indexOfTabToInsertNewTabAfter;
- (id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)arg1 relation:(unsigned long long)arg2;
- (id)_insertionHintWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2;
- (bool)_newTabPositionPreferenceAppliesToSwawnedTabs;
- (id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)arg1 inAscendingOrder:(bool)arg2;
- (unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)arg1 isBlankTab:(bool)arg2;
- (bool)_tab:(id)arg1 isRelatedOrEqualToTab:(id)arg2;
- (id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)arg1;
- (id)_tabInsertionHintForNewTabAfterTab:(id)arg1 relation:(unsigned long long)arg2;
- (id)_tabInsertionHintForPosition:(unsigned long long)arg1 isBlankTab:(bool)arg2;
- (unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(bool)arg1;
- (unsigned long long)_userPreferredNewSpawnedTabPosition;
- (id)init;
- (double)minimumDelayForRelatingNewBlankTab;
- (bool)newBlankTabPositionAppliesToAllBlankTabs;
- (unsigned long long)newTabPosition;
- (bool)newTabPositionAppliesToSpawnedTabs;
- (id)preferenceProvider;
- (void)setPreferenceProvider:(id)arg1;
- (void)setTabOrderProvider:(id)arg1;
- (id)simplifiedIdentifierForDisplayInTabTitle:(id)arg1;
- (bool)suppressRelatingNewBlankTabs;
- (bool)tab:(id)arg1 isInSameSetAsTab:(id)arg2;
- (id)tabInsertionHintForDuplicateOfTab:(id)arg1;
- (id)tabInsertionHintForNewBlankTab;
- (id)tabInsertionHintForNewBlankTabInCurrentContext;
- (id)tabInsertionHintForNewTabOfType:(long long)arg1;
- (id)tabInsertionHintForPosition:(unsigned long long)arg1;
- (id)tabInsertionHintForSpawnedTab;
- (id)tabOrderProvider;
- (id)tabToInsertNewBlankTabAfter;
- (id)tabToInsertNewTabAfterForPosition:(unsigned long long)arg1;
- (id)tabToInsertSpawnedTabAfter;
- (id)tabToSelectBeforeClosingSelectedTab;

@end
