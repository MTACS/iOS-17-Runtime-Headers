
@protocol CKVSearchService

@required

- (NSArray *)matchSpansOfString:(NSString *)arg1;
- (NSArray *)matchSpansWithTokenChain:(CKVTokenChain *)arg1;
- (void)prewarmSpanMatcher;
- (NSArray *)searchFTSWithCriteria:(CKVSearchCriteria *)arg1 error:(id*)arg2;

@end
