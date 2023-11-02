
@interface HUServiceDetailsControlAndCharacteristicStateItemModule : HUServiceDetailsItemModule {
    HFCharacteristicStateItemProvider * _characteristicStateItemProvider;
    HFControlPanelItemProvider * _controlPanelItemProvider;
    <HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> * _delegate;
    NSSet * _itemProviders;
}

@property (nonatomic, readonly) HFCharacteristicStateItemProvider *characteristicStateItemProvider;
@property (nonatomic, readonly) HFControlPanelItemProvider *controlPanelItemProvider;
@property (nonatomic) <HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> *delegate;

- (void).cxx_destruct;
- (id)_allCharacteristicTypesForItem:(id)arg1;
- (id /* block */)_characteristicStateItemComparator;
- (id)_createGroupCharacteristicSectionsForItems:(id)arg1;
- (id)_createStandaloneCharacteristicSectionsForItems:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)characteristicStateItemProvider;
- (id)controlPanelItemProvider;
- (id)delegate;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 delegate:(id)arg4;
- (bool)isServiceGroup;
- (id)itemProviders;
- (void)setDelegate:(id)arg1;
- (id)sourceServiceItem;

@end
