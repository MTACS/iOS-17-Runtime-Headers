
@protocol _CPMailRankingSignalsForFeedback <NSObject>

@required

- (int)averageEngagementAgeLast14Days;
- (int)averageEngagementAgeLast21Days;
- (int)averageEngagementAgeLast30Days;
- (int)averageEngagementAgeLast7Days;
- (unsigned long long)daysSinceReceipt;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isFlagged;
- (bool)isRepliedTo;
- (NSData *)jsonData;
- (float)l1Score;
- (float)l2Score;
- (unsigned long long)numDaysEngagedLast30Days;
- (unsigned long long)numEngagements;
- (void)setAverageEngagementAgeLast14Days:(int)arg1;
- (void)setAverageEngagementAgeLast21Days:(int)arg1;
- (void)setAverageEngagementAgeLast30Days:(int)arg1;
- (void)setAverageEngagementAgeLast7Days:(int)arg1;
- (void)setDaysSinceReceipt:(unsigned long long)arg1;
- (void)setIsFlagged:(bool)arg1;
- (void)setIsRepliedTo:(bool)arg1;
- (void)setL1Score:(float)arg1;
- (void)setL2Score:(float)arg1;
- (void)setNumDaysEngagedLast30Days:(unsigned long long)arg1;
- (void)setNumEngagements:(unsigned long long)arg1;
- (void)setWasReorderedByRecency:(bool)arg1;
- (bool)wasReorderedByRecency;

@end
