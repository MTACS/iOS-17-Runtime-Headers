
@protocol APPCPromotableContext <APPCPromotableBaseContext>

@required

- (void)prefetchPromotedContentWithRequests:(NSArray *)arg1;
- (NSDate *)prefetchTimestamp;
- (<APPCPromotableContent> *)promotedContentWithType:(void *)arg1 size:(void *)arg2 placeholderReplacement:(void *)arg3; // needs 3 arg types, found 8: long long, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <APPCPromotableContent> *, void*
- (<APPCPromotableContent> *)promotedContentWithoutFetchWithType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)registerDenylistEvaluator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, APPCDenylistReasonCharacteristic *, void*

@end
