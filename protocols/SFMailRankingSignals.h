
@protocol SFMailRankingSignals <NSObject>

@required

- (NSNumber *)averageEngagementAgeLast14Days;
- (NSNumber *)averageEngagementAgeLast21Days;
- (NSNumber *)averageEngagementAgeLast30Days;
- (NSNumber *)averageEngagementAgeLast7Days;
- (unsigned long long)daysSinceReceipt;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isFlagged;
- (bool)isRepliedTo;
- (NSData *)jsonData;
- (NSNumber *)l1Score;
- (NSNumber *)l2Score;
- (unsigned long long)numDaysEngagedLast30Days;
- (unsigned long long)numEngagements;
- (void)setAverageEngagementAgeLast14Days:(NSNumber *)arg1;
- (void)setAverageEngagementAgeLast21Days:(NSNumber *)arg1;
- (void)setAverageEngagementAgeLast30Days:(NSNumber *)arg1;
- (void)setAverageEngagementAgeLast7Days:(NSNumber *)arg1;
- (void)setDaysSinceReceipt:(unsigned long long)arg1;
- (void)setIsFlagged:(bool)arg1;
- (void)setIsRepliedTo:(bool)arg1;
- (void)setL1Score:(NSNumber *)arg1;
- (void)setL2Score:(NSNumber *)arg1;
- (void)setNumDaysEngagedLast30Days:(unsigned long long)arg1;
- (void)setNumEngagements:(unsigned long long)arg1;
- (void)setWasReorderedByRecency:(bool)arg1;
- (bool)wasReorderedByRecency;

@end
