
@interface HomeUI.ContainedSpeakersItemManager : HFItemManager {
    void accessoryElementContext;
    void accessoryElementItemModule;
    void mediaItem;
    void removeItem;
    void removeItemSectionIdentifier;
}

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end
