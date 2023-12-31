
@protocol TSKSearchTarget <NSObject>

@optional

- (NSArray *)childAnnotationSearchTargets;
- (NSArray *)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchReference> *, void*
- (void)layoutSearchForSpellingErrorsWithHitBlock:(void *)arg1 stop:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchReference> *, void*, bool*
- (void)layoutSearchForString:(void *)arg1 options:(void *)arg2 hitBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchReference> *, void*

@end
