
@interface HUServiceDetailsProgrammableSwitchItemModule : HUServiceDetailsItemModule {
    NSSet * _itemProviders;
    HUCharacteristicEventOptionProvider * _programmableSwitchOptionsProvider;
}

@property (nonatomic, copy) NSSet *itemProviders;
@property (nonatomic, readonly) HUCharacteristicEventOptionProvider *programmableSwitchOptionsProvider;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *sourceItem;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)programmableSwitchOptionsProvider;
- (void)setItemProviders:(id)arg1;

@end
