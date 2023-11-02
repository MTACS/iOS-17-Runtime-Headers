
@protocol PGHighlightItemListModelWriter <PGHighlightItemModelReader>

@required

- (void)addVisibleHighlight:(id <PGHighlightItem>)arg1 inMonth:(id <PGHighlightItem>)arg2 withHighlightFilter:(unsigned short)arg3;
- (void)consumeHighlightItemList:(PGHighlightItemList *)arg1;
- (void)setContextualKeyAsset:(PHAsset *)arg1 forHighlightItem:(id <PGHighlightItem>)arg2 sharingFilter:(unsigned short)arg3;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id <PGHighlightItem>)arg2 sharingFilter:(unsigned short)arg3;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItemList:(PGHighlightItemList *)arg2 sharingFilter:(unsigned short)arg3;

@end
