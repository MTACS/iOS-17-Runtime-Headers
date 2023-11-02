
@interface HomeUI.ServiceGroupEditorItemManager : HFItemManager {
    void accessoryElementContext;
    void accessoryElementItemModule;
    void creatingNew;
    void nameAndIconItem;
    void selectionController;
    void staticItemProvider;
}

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end
