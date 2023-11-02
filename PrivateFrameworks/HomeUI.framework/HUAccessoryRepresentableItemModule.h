
@interface HUAccessoryRepresentableItemModule : HomeUI.AccessoryItemModule {
    void accessoryItemProvider;
    void context;
    void selectionController;
}

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)initWithContext:(id)arg1 in:(id)arg2 itemUpdater:(id)arg3;

@end
