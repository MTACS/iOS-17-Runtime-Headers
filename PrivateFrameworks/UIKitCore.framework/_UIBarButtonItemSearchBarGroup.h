
@interface _UIBarButtonItemSearchBarGroup : UIBarButtonItemGroup {
    double  _contextualExpandedPadding;
    bool  _disabledExpansion;
    bool  _hadRepresentativeItemBeforeMovingToProvisionalState;
    bool  _providesRestingMeasurementValues;
    UISearchBar * _searchBar;
    UIBarButtonItem * _searchIconItem;
    UIBarButtonItem * _searchItem;
}

- (void).cxx_destruct;
- (double)_contextualExpandedPadding;
- (bool)_disabledExpansion;
- (bool)_isCritical;
- (id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2;
- (void)setBarButtonItems:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setRepresentativeItem:(id)arg1;

@end
