
@interface PXPhotosDetailsBarSpec : PXBarSpec {
    unsigned long long  _detailsOptions;
    NSSet * _includedBarItemIdentifiers;
    bool  _shouldPlaceEditActionsInToolbar;
    NSDictionary * _sortPriorityByBarItemIdentifierByPlacement;
}

@property (nonatomic) unsigned long long detailsOptions;

- (void).cxx_destruct;
- (id)_placementForBarItem:(id)arg1;
- (bool)_shouldIncludeItem:(id)arg1;
- (id)_sortPriorityForBarItem:(id)arg1 placement:(id)arg2;
- (unsigned long long)detailsOptions;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (void)setDetailsOptions:(unsigned long long)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;

@end
