
@protocol INSearchForTimersIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)matchedTimers;
- (void)setMatchedTimers:(NSArray *)arg1;
- (void)setUnmatchedTimers:(NSArray *)arg1;
- (NSArray *)unmatchedTimers;

@end
