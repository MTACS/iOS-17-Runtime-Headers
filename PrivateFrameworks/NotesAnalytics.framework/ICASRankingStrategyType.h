
@interface ICASRankingStrategyType : NSObject <AADataType> {
    long long  _rankingStrategyType;
}

@property (nonatomic, readonly) long long rankingStrategyType;

- (id)initWithRankingStrategyType:(long long)arg1;
- (long long)rankingStrategyType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
