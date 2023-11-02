
@interface HURoomActionSetListItemManager : HFItemManager {
    NSArray * _cachedSortedRooms;
}

@property (nonatomic, retain) NSArray *cachedSortedRooms;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_currentSectionIdentifiers;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id /* block */)_roomComparator;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_sortedRooms;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_willUpdateSections;
- (id)cachedSortedRooms;
- (id)currentSectionIdentifiersSnapshot;
- (long long)sectionIndexForRoomIdentifier:(id)arg1;
- (void)setCachedSortedRooms:(id)arg1;

@end
