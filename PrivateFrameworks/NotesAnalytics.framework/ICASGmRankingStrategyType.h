
@interface ICASGmRankingStrategyType : NSObject <AADataType> {
    long long  _gmRankingStrategyType;
}

@property (nonatomic, readonly) long long gmRankingStrategyType;

- (long long)gmRankingStrategyType;
- (id)initWithGmRankingStrategyType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
