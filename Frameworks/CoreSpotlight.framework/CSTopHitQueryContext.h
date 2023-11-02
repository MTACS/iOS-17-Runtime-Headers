
@interface CSTopHitQueryContext : CSUserQueryContext {
    long long  _maxItemCount;
}

@property (nonatomic) long long maxItemCount;

+ (id)topHitQueryContext;
+ (id)topHitQueryContextWithCurrentSuggestion:(id)arg1;

- (long long)maxItemCount;
- (void)setMaxItemCount:(long long)arg1;

@end
