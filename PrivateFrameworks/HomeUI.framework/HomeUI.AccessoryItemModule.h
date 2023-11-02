
@interface HomeUI.AccessoryItemModule : HFItemModule {
    void home;
    void itemProviderBlock;
    void sectionGroupingType;
}

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;

@end
