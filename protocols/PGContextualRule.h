
@protocol PGContextualRule <NSObject>

@required

- (bool)canProvideContextualKeyAssetsWithOptions:(PGContextualOptions *)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(void *)arg1 sharingFilter:(void *)arg2 withOptions:(void *)arg3 modelReader:(void *)arg4 curationContext:(void *)arg5 usingBlock:(void *)arg6; // needs 6 arg types, found 15: PGHighlightItemList *, unsigned short, PGContextualOptions *, <PGHighlightItemModelReader> *, CLSCurationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PHAsset *, double, <PGHighlightItem> *, <PGHighlightItem> *, bool*, void*

@end
