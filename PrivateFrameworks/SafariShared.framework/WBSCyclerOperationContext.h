
@interface WBSCyclerOperationContext : NSObject {
    WBSCyclerProfileRepresentation * _tabGroupsParent;
    <WBSCyclerTestTarget> * _testTarget;
    NSString * _titlePrefix;
    WBSCyclerItemListRepresentation * _topLevelItem;
}

@property (nonatomic, retain) WBSCyclerProfileRepresentation *tabGroupsParent;
@property (nonatomic, retain) <WBSCyclerTestTarget> *testTarget;
@property (nonatomic, copy) NSString *titlePrefix;
@property (nonatomic, retain) WBSCyclerItemListRepresentation *topLevelItem;

- (void).cxx_destruct;
- (id)_availableSymbolImageNames;
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)arg1;
- (id)_copyItem:(id)arg1 filteringWithIdentifierWhitelist:(id)arg2;
- (bool)_isItemPrefixed:(id)arg1;
- (bool)_isItemValid:(id)arg1;
- (id)filterOutItemsWithoutTitlePrefixInList:(id)arg1;
- (id)randomDescendantOfList:(id)arg1 enforcingTitlePrefixValidity:(bool)arg2 passingTest:(id /* block */)arg3;
- (id)randomItemTitle;
- (id)randomSymbolImageName;
- (id)randomValidStrictDescendantOfList:(id)arg1;
- (id)randomValidStrictDescendantOfTopLevelItem;
- (id)randomValidStrictListDescendantOfList:(id)arg1;
- (id)randomValidStrictListDescendantOfTopLevelItem;
- (void)setTabGroupsParent:(id)arg1;
- (void)setTestTarget:(id)arg1;
- (void)setTitlePrefix:(id)arg1;
- (void)setTopLevelItem:(id)arg1;
- (id)tabGroupsParent;
- (id)testTarget;
- (id)titlePrefix;
- (id)topLevelItem;

@end
