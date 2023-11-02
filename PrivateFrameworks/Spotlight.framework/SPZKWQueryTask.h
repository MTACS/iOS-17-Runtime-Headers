
@interface SPZKWQueryTask : SPQueryTask

+ (void)initialize;
+ (int)maxSuggestedApps;

- (void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3;
- (void)start;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;

@end
