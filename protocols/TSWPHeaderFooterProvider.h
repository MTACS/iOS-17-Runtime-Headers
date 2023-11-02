
@protocol TSWPHeaderFooterProvider <NSObject>

@required

- (double)bodyWidth;
- (TSKDocumentRoot *)documentRoot;
- (TSWPStorage *)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (NSEnumerator *)headerFooterFragmentEnumerator;
- (long long)headerFooterTypeForStorage:(TSWPStorage *)arg1;
- (long long)headerFragmentIndexForStorage:(TSWPStorage *)arg1;
- (bool)isHeaderFooterEmpty:(long long)arg1;
- (bool)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (bool)usesSingleHeaderFooter;

@end
