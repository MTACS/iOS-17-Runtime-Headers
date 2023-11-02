
@interface ICASSearchRankingExperimentItemData : NSObject <AADataEventType> {
    NSNumber * _rank;
    ICASRankingStrategyType * _rankingStrategyType;
}

@property (nonatomic, readonly) NSNumber *rank;
@property (nonatomic, readonly) ICASRankingStrategyType *rankingStrategyType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithRankingStrategyType:(id)arg1 rank:(id)arg2;
- (id)rank;
- (id)rankingStrategyType;
- (id)toDict;

@end
