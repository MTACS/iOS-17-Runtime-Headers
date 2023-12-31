
@interface TSTFindReplace : NSObject

+ (void)p_searchInfo:(id)arg1 layout:(id)arg2 forAnnotationsWithHitBlock:(id /* block */)arg3;
+ (void)searchInfo:(id)arg1 forAnnotationsWithHitBlock:(id /* block */)arg2;
+ (void)searchInfo:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(id /* block */)arg4;
+ (void)searchLayout:(id)arg1 forAnnotationsWithHitBlock:(id /* block */)arg2;
+ (void)searchLayout:(id)arg1 forSpellingErrorsWithHitBlock:(id /* block */)arg2 stop:(bool*)arg3;
+ (void)searchLayout:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(id /* block */)arg4;

@end
