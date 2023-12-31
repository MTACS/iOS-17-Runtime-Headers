
@protocol _CDInteractionRanking

@required

- (bool)canRankContacts;
- (bool)contactIsAllowed:(_CDContact *)arg1;
- (unsigned long long)rankAggregationMethod;
- (double)rankContact:(_CDContact *)arg1;
- (_CDInteractionRank *)rankInteraction:(_CDInteraction *)arg1;
- (void)setRankAggregationMethod:(unsigned long long)arg1;

@end
