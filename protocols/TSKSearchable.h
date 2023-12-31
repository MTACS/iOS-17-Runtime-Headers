
@protocol TSKSearchable <TSKModel>

@optional

- (TSKReplaceAllChildCommand *)childCommandForReplaceAllCommand:(TSKReplaceAllCommand *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)continueSearch:(TSKSearch *)arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchReference> *, void*
- (TSKSearch *)searchForString:(void *)arg1 options:(void *)arg2 onHit:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchReference> *, void*

@end
