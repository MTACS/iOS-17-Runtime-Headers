
@interface HUTriggerConditionEditorExpandingSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule> {
    HFCondition * _condition;
    unsigned long long  _conditionType;
    HMHome * _home;
    HFStaticItemProvider * _itemProvider;
    NSArray * _optionItems;
    HFItem * _selectedOptionItem;
    bool  _showOptions;
    HFItem * _showOptionsItem;
}

@property (nonatomic, retain) HFCondition *condition;
@property (nonatomic, readonly) unsigned long long conditionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFStaticItemProvider *itemProvider;
@property (nonatomic, retain) NSArray *optionItems;
@property (nonatomic, retain) HFItem *selectedOptionItem;
@property (nonatomic) bool showOptions;
@property (nonatomic, retain) HFItem *showOptionsItem;
@property (readonly) Class superclass;

+ (id)sectionModuleForConditionType:(unsigned long long)arg1 itemUpdater:(id)arg2 home:(id)arg3;

- (void).cxx_destruct;
- (void)_buildItemProvider;
- (id)buildConditionOptionItems;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)condition;
- (id)conditionForOptionItem:(id)arg1;
- (bool)conditionIsDisabled;
- (id)conditionTitle;
- (unsigned long long)conditionType;
- (id)createNoConditionOptionItemWithTitle:(id)arg1;
- (bool)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3;
- (id)itemProvider;
- (id)itemProviders;
- (id)optionItems;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)sectionID;
- (id)selectOptionItem:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)selectedOptionItem;
- (void)setCondition:(id)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setOptionItems:(id)arg1;
- (void)setSelectedOptionItem:(id)arg1;
- (void)setShowOptions:(bool)arg1;
- (void)setShowOptionsItem:(id)arg1;
- (bool)showOptions;
- (id)showOptionsItem;
- (id)updateSelectionWithCondition:(id)arg1;

@end
