
@protocol MLPreparable <MLModeling>

@required

- (bool)prepareWithConcurrencyHint:(long long)arg1 error:(id*)arg2;

@end
