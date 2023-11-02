
@protocol PGHighlightItemEnrichmentRule <NSObject>

@required

- (void)enumerateChildVisibilityStateForHighlightItemList:(void *)arg1 sharingFilter:(void *)arg2 withGraph:(void *)arg3 neighborScoreComputer:(void *)arg4 usingBlock:(void *)arg5; // needs 5 arg types, found 11: PGHighlightItemList *, unsigned short, PGGraph *, PGNeighborScoreComputer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PGHighlightItem> *, unsigned short, void*
- (PHAsset *)keyAssetForHighlightItemList:(PGHighlightItemList *)arg1 sharingFilter:(unsigned short)arg2;
- (NSObject<OS_os_log> *)loggingConnection;
- (double)promotionScoreForHighlightItemList:(PGHighlightItemList *)arg1;

@optional

- (void)enumerateChildVisibilityStateForHighlightItemList:(void *)arg1 sharingFilter:(void *)arg2 withGraph:(void *)arg3 neighborScoreComputer:(void *)arg4 usingBlock:(void *)arg5 maximumNumberOfVisibleItems:(void *)arg6 maximumNumberOfVisibleRegularItems:(void *)arg7; // needs 7 arg types, found 13: PGHighlightItemList *, unsigned short, PGGraph *, PGNeighborScoreComputer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PGHighlightItem> *, unsigned short, void*, unsigned long long, unsigned long long

@end
