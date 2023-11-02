
@interface HUValveEditorViewController : HUItemTableViewController {
    NSMutableSet * _moduleControllers;
    HUNameItemModuleController * _nameModuleController;
    HUValveEditorItemManager * _valveEditorItemManager;
}

@property (nonatomic, retain) NSMutableSet *moduleControllers;
@property (nonatomic, retain) HUNameItemModuleController *nameModuleController;
@property (nonatomic, retain) HUValveEditorItemManager *valveEditorItemManager;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)diffableDataItemManager:(id)arg1 willUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4 isInitialLoad:(bool)arg5;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithSourceItem:(id)arg1 editorMode:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemModuleControllers;
- (id)moduleControllers;
- (id)nameModuleController;
- (void)setModuleControllers:(id)arg1;
- (void)setNameModuleController:(id)arg1;
- (void)setValveEditorItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)valveEditorItemManager;

@end
