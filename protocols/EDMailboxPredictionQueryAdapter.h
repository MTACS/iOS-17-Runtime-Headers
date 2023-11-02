
@protocol EDMailboxPredictionQueryAdapter <NSObject>

@required

- (NSDictionary *)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (NSArray *)validMailboxesForPrediction;

@end
