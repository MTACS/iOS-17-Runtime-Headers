
@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup {
    NSArray * _addItems;
}

- (void).cxx_destruct;
- (id)addItems;
- (long long)addProviderItem:(id)arg1;
- (id)dedupedSuggestionItemsGroupedByProvider;
- (id)defaultMonogramItem;
- (long long)indexForDefaultMonogram;
- (id)initWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(bool)arg3;
- (id)itemsForProviderIdentifier:(id)arg1;
- (void)loadAvailablePaddingItems;
- (unsigned long long)maxRecentsAndMonogramsCount;
- (id)paddedDisplayItems:(id)arg1;
- (void)prepareDisplayItems:(id)arg1;
- (void)providerItemDidUpdate:(id)arg1;
- (id)providerItems:(id)arg1 withMaxRecentsAndMonogramsCount:(unsigned long long)arg2;
- (id)providerOfClass:(Class)arg1;
- (void)reloadMonogramProviderGroupWithVisualIdentity:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 RTL:(bool)arg3;
- (long long)removeProviderItem:(id)arg1;
- (void)setAddItems:(id)arg1;

@end
