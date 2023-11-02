
@interface HUShortcutsAccessoryPickerViewController : HUItemCollectionViewController {
    void configuration;
    void home;
    void module;
    void moduleContext;
    void moduleController;
    void selectionController;
}

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)configureWithDefaultSelectionController;
- (id)getServices;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithHome:(id)arg1 configuration:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (void)setServices:(id)arg1;

@end
