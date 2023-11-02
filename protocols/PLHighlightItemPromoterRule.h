
@protocol PLHighlightItemPromoterRule <NSObject>

@required

- (<PLHighlightItem> *)fallbackHighlightItemFromAllHighlightItems:(NSSet *)arg1 withSharingConsideration:(long long)arg2;
- (bool)highlightItemHasMinimumRequirementToBePromoted:(id <PLHighlightItem>)arg1 withSharingConsideration:(long long)arg2;
- (NSArray *)highlightItemsSortedByImportance:(NSSet *)arg1 withSharingConsideration:(long long)arg2;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;

@end
