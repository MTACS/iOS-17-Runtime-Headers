
@interface HUMediaSystemEditorGridItemManager : HUServiceGridItemManager {
    HFMediaSystemBuilder * _mediaSystemBuilder;
    NSSet * _prioritizedRooms;
}

@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (nonatomic, retain) NSSet *prioritizedRooms;

+ (id /* block */)defaultItemProviderCreatorForMediaSystemBuilder:(id)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)arg1;
- (id /* block */)_roomComparator;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(bool)arg2 itemProvidersCreator:(id /* block */)arg3;
- (id)initWithMediaSystemBuilder:(id)arg1 delegate:(id)arg2;
- (id)mediaSystemBuilder;
- (id)prioritizedRooms;
- (void)setPrioritizedRooms:(id)arg1;

@end
