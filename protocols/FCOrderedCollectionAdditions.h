
@protocol FCOrderedCollectionAdditions

@required

- (NSDictionary *)fc_diffAgainstSortedOrderedCollection:(void *)arg1 usingComparator:(void *)arg2; // needs 2 arg types, found 8: <FCOrderedCollection> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, id, id, void*
- (void)fc_enumerateObjectsPairwiseUsingBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, unsigned long long, bool*, void*
- (bool)fc_isSortedUsingComparator:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, id, id, void*
- (id)fc_objectInSortedOrderedCollectionWithFeature:(void *)arg1 usingFeatureProvider:(void *)arg2 comparator:(void *)arg3; // needs 3 arg types, found 14: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, id, void*, id /* block */, void*, long long, id /* block */, id, id, void*

@end
