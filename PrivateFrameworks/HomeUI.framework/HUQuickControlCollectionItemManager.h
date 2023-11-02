
@interface HUQuickControlCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging> {
    HFItemProvider * _gridItemProvider;
    id /* block */  _gridItemProviderCreator;
    HFItem<NSCopying> * _supplementaryItem;
    HFItemProvider * _supplementaryItemProvider;
    id /* block */  _supplementaryItemProviderCreator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFItemProvider *gridItemProvider;
@property (nonatomic, readonly, copy) id /* block */ gridItemProviderCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFItem<NSCopying> *supplementaryItem;
@property (nonatomic, retain) HFItemProvider *supplementaryItemProvider;
@property (nonatomic, readonly, copy) id /* block */ supplementaryItemProviderCreator;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_shouldDisableOptionalDataDuringFastInitialUpdate;
- (id)gridItemProvider;
- (id /* block */)gridItemProviderCreator;
- (id)initWithDelegate:(id)arg1 gridItemProviderCreator:(id /* block */)arg2 supplementaryItemProviderCreator:(id /* block */)arg3;
- (bool)isGridItem:(id)arg1;
- (void)setGridItemProvider:(id)arg1;
- (void)setSupplementaryItemProvider:(id)arg1;
- (id)supplementaryItem;
- (id)supplementaryItemProvider;
- (id /* block */)supplementaryItemProviderCreator;

@end
