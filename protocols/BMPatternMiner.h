
@protocol BMPatternMiner

@required

- (id)initWithBaskets:(NSArray *)arg1;
- (NSDictionary *)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(NSSet *)arg2;

@end
