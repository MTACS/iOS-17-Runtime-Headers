
@interface HUZoneModuleController : HUItemModuleController <UITextFieldDelegate> {
    HUEditableTextCollectionListCell * _createNewZoneCell;
    UICollectionViewListCell * _currentZoneItemCell;
    UITextField * _editingTextField;
    bool  _hasPendingCreation;
    HMRoom * _room;
}

@property (nonatomic) HUEditableTextCollectionListCell *createNewZoneCell;
@property (nonatomic) UICollectionViewListCell *currentZoneItemCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UITextField *editingTextField;
@property (nonatomic) bool hasPendingCreation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFZoneModule *module;
@property (nonatomic, retain) HMRoom *room;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCreateNewZoneItem:(id)arg1 forCell:(id)arg2;
- (void)_configureCurrentZonesItem:(id)arg1 forCell:(id)arg2;
- (void)_configureZoneBuilderItem:(id)arg1 forCell:(id)arg2;
- (void)_configureZoneItem:(id)arg1 forCell:(id)arg2;
- (id)_createNewZoneWithName:(id)arg1;
- (id)_didSelectZoneBuilderItem:(id)arg1;
- (id)_didSelectZoneItem:(id)arg1;
- (void)_updateCreateNewZoneCellText:(bool)arg1;
- (bool)_validateNewZoneName:(id)arg1;
- (Class)collectionCellClassForItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)createNewZoneCell;
- (id)currentZoneItemCell;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)editingTextField;
- (id)finishZoneNameEditing;
- (bool)hasPendingCreation;
- (id)initWithModule:(id)arg1 room:(id)arg2;
- (id)room;
- (void)setCreateNewZoneCell:(id)arg1;
- (void)setCurrentZoneItemCell:(id)arg1;
- (void)setEditingTextField:(id)arg1;
- (void)setHasPendingCreation:(bool)arg1;
- (void)setRoom:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
