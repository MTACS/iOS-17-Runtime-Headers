
@interface HUNameItemModule : HFItemModule {
    HFStaticItemProvider * _itemProvider;
    NSSet * _items;
    HFTransformItem * _nameAndIconItem;
    HFItem<HFNamingComponentCreating> * _sourceItem;
    HFItemBuilder * _sourceItemBuilder;
}

@property (nonatomic, retain) HFStaticItemProvider *itemProvider;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, retain) HFTransformItem *nameAndIconItem;
@property (nonatomic, retain) HFItem<HFNamingComponentCreating> *sourceItem;
@property (nonatomic, retain) HFItemBuilder *sourceItemBuilder;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)init;
- (id)initWithItemUpdater:(id)arg1 sourceServiceLikeItem:(id)arg2 itemBuilder:(id)arg3;
- (id)itemProvider;
- (id)itemProviders;
- (id)items;
- (id)nameAndIconItem;
- (void)setItemProvider:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setNameAndIconItem:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setSourceItemBuilder:(id)arg1;
- (id)sourceItem;
- (id)sourceItemBuilder;

@end
