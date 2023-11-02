
@interface ATXDigestEngagementMetric : _ATXCoreAnalyticsMetric {
    double  _digestExpirationTimestamp;
    NSString * _digestTimeCategory;
    NSString * _digestUUID;
    double  _firstScheduledViewTimestamp;
    double  _firstUpcomingViewTimestamp;
    unsigned long long  _numDigestExpansions;
    unsigned long long  _numEngagementsAfterExpiration;
    unsigned long long  _numEngagementsInScheduled;
    unsigned long long  _numEngagementsInUpcoming;
    unsigned long long  _numHighlightedGroups;
    unsigned long long  _numHighlightedNotifications;
    unsigned long long  _numMessageGroups;
    unsigned long long  _numMessageNotifications;
    unsigned long long  _numNotificationGroupExpansions;
    unsigned long long  _numOtherGroups;
    unsigned long long  _numOtherNotifications;
}

@property (nonatomic) double digestExpirationTimestamp;
@property (nonatomic, retain) NSString *digestTimeCategory;
@property (nonatomic, retain) NSString *digestUUID;
@property (nonatomic) double firstScheduledViewTimestamp;
@property (nonatomic) double firstUpcomingViewTimestamp;
@property (nonatomic) unsigned long long numDigestExpansions;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numHighlightedGroups;
@property (nonatomic) unsigned long long numHighlightedNotifications;
@property (nonatomic) unsigned long long numMessageGroups;
@property (nonatomic) unsigned long long numMessageNotifications;
@property (nonatomic) unsigned long long numNotificationGroupExpansions;
@property (nonatomic) unsigned long long numOtherGroups;
@property (nonatomic) unsigned long long numOtherNotifications;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (double)digestExpirationTimestamp;
- (id)digestTimeCategory;
- (id)digestUUID;
- (double)firstScheduledViewTimestamp;
- (double)firstUpcomingViewTimestamp;
- (id)metricName;
- (unsigned long long)numDigestExpansions;
- (unsigned long long)numEngagementsAfterExpiration;
- (unsigned long long)numEngagementsInScheduled;
- (unsigned long long)numEngagementsInUpcoming;
- (unsigned long long)numHighlightedGroups;
- (unsigned long long)numHighlightedNotifications;
- (unsigned long long)numMessageGroups;
- (unsigned long long)numMessageNotifications;
- (unsigned long long)numNotificationGroupExpansions;
- (unsigned long long)numOtherGroups;
- (unsigned long long)numOtherNotifications;
- (void)populateMetricsFromDigest:(id)arg1;
- (void)setDigestExpirationTimestamp:(double)arg1;
- (void)setDigestTimeCategory:(id)arg1;
- (void)setDigestUUID:(id)arg1;
- (void)setFirstScheduledViewTimestamp:(double)arg1;
- (void)setFirstUpcomingViewTimestamp:(double)arg1;
- (void)setNumDigestExpansions:(unsigned long long)arg1;
- (void)setNumEngagementsAfterExpiration:(unsigned long long)arg1;
- (void)setNumEngagementsInScheduled:(unsigned long long)arg1;
- (void)setNumEngagementsInUpcoming:(unsigned long long)arg1;
- (void)setNumHighlightedGroups:(unsigned long long)arg1;
- (void)setNumHighlightedNotifications:(unsigned long long)arg1;
- (void)setNumMessageGroups:(unsigned long long)arg1;
- (void)setNumMessageNotifications:(unsigned long long)arg1;
- (void)setNumNotificationGroupExpansions:(unsigned long long)arg1;
- (void)setNumOtherGroups:(unsigned long long)arg1;
- (void)setNumOtherNotifications:(unsigned long long)arg1;

@end
