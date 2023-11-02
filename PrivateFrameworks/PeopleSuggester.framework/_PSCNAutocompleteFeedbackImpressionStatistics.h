
@interface _PSCNAutocompleteFeedbackImpressionStatistics : NSObject {
    long long  _countTapped;
    long long  _countUsed;
    long long  _highestRankTapped;
    long long  _highestRankUsed;
    long long  _lowestRankTapped;
    long long  _lowestRankUsed;
    long long  _totalRankTapped;
    long long  _totalRankUsed;
}

@property (nonatomic) long long countTapped;
@property (nonatomic) long long countUsed;
@property (nonatomic) long long highestRankTapped;
@property (nonatomic) long long highestRankUsed;
@property (nonatomic) long long lowestRankTapped;
@property (nonatomic) long long lowestRankUsed;
@property (nonatomic) long long totalRankTapped;
@property (nonatomic) long long totalRankUsed;

- (long long)countTapped;
- (long long)countUsed;
- (long long)highestRankTapped;
- (long long)highestRankUsed;
- (long long)lowestRankTapped;
- (long long)lowestRankUsed;
- (void)setCountTapped:(long long)arg1;
- (void)setCountUsed:(long long)arg1;
- (void)setHighestRankTapped:(long long)arg1;
- (void)setHighestRankUsed:(long long)arg1;
- (void)setLowestRankTapped:(long long)arg1;
- (void)setLowestRankUsed:(long long)arg1;
- (void)setTotalRankTapped:(long long)arg1;
- (void)setTotalRankUsed:(long long)arg1;
- (long long)totalRankTapped;
- (long long)totalRankUsed;

@end
