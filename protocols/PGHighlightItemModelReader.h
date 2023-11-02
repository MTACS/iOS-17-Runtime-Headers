
@protocol PGHighlightItemModelReader <NSObject>

@required

- (PHAsset *)contextualKeyAssetForHighlightItem:(id <PGHighlightItem>)arg1 sharingFilter:(unsigned short)arg2;
- (NSArray *)fetchChildHighlightItemsForHighlightItem:(id <PGHighlightItem>)arg1 sharingFilter:(unsigned short)arg2;
- (NSArray *)fetchParentHighlightItemsForHighlightItems:(id <NSFastEnumeration>)arg1;
- (unsigned short)visibilityStateForHighlightItem:(id <PGHighlightItem>)arg1 sharingFilter:(unsigned short)arg2;

@end
