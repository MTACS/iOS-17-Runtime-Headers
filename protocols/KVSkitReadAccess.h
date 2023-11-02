
@protocol KVSkitReadAccess <NSObject>

@required

- (NSLocale *)indexLocale;
- (NSArray *)matchSpans:(KVSpanMatchQuery *)arg1 error:(id*)arg2;
- (void)prewarm;

@end
