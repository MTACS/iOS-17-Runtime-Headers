
@interface HUSceneActionEditorItemManager : HFItemManager {
    NSMutableDictionary * _actionGridItemsByEditorType;
    HFActionSetBuilder * _actionSetBuilder;
    HFStaticItem * _changeServicesItem;
    HFStaticItem * _deleteSceneItem;
    NSSet * _instructionsItems;
    HFStaticItem * _mediaInstructionsItem;
    HFStaticItem * _mediaItem;
    unsigned long long  _mode;
    HFStaticItem * _nameAndIconItem;
    NSSet * _prioritizedAccessories;
    HFItem * _showInHomeDashboardItem;
    HFStaticItem * _testSceneItem;
}

@property (nonatomic, readonly) NSSet *actionGridItems;
@property (nonatomic, readonly) NSMutableDictionary *actionGridItemsByEditorType;
@property (nonatomic, retain) HFActionSetBuilder *actionSetBuilder;
@property (nonatomic, retain) HFStaticItem *changeServicesItem;
@property (nonatomic, retain) HFStaticItem *deleteSceneItem;
@property (nonatomic, readonly) NSSet *instructionsItems;
@property (nonatomic, readonly) NSSet *itemsToHideWhenEmpty;
@property (nonatomic, readonly) HFStaticItem *mediaInstructionsItem;
@property (nonatomic, retain) HFStaticItem *mediaItem;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) HFStaticItem *nameAndIconItem;
@property (nonatomic, copy) NSSet *prioritizedAccessories;
@property (nonatomic, retain) HFItem *showInHomeDashboardItem;
@property (nonatomic, retain) HFStaticItem *testSceneItem;

+ (unsigned long long)actionGridEditorTypeForSectionIdentifier:(id)arg1;
+ (id)allActionGridEditorSectionIdentifiers;
+ (id)sectionIdentifierForActionGridEditorType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionForActionGridEditorType:(unsigned long long)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_createItemsForActionGridEditorType:(unsigned long long)arg1 home:(id)arg2;
- (id)_itemsToHideInSet:(id)arg1;
- (id)actionGridItems;
- (id)actionGridItemsByEditorType;
- (id)actionSetBuilder;
- (id)changeServicesItem;
- (id)deleteSceneItem;
- (id)initWithActionSetBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (id)instructionsItems;
- (id)itemsToHideWhenEmpty;
- (id)mediaInstructionsItem;
- (id)mediaItem;
- (unsigned long long)mode;
- (id)nameAndIconItem;
- (id)prioritizedAccessories;
- (void)setActionSetBuilder:(id)arg1;
- (void)setChangeServicesItem:(id)arg1;
- (void)setDeleteSceneItem:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setNameAndIconItem:(id)arg1;
- (void)setPrioritizedAccessories:(id)arg1;
- (void)setShowInHomeDashboardItem:(id)arg1;
- (void)setTestSceneItem:(id)arg1;
- (id)showInHomeDashboardItem;
- (id)testSceneItem;

@end
