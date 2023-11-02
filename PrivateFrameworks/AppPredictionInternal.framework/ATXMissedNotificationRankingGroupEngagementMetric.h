
@interface ATXMissedNotificationRankingGroupEngagementMetric : _ATXCoreAnalyticsMetric {
    NSString * _bundleId;
    double  _groupScore;
    NSString * _mnbUUID;
    unsigned long long  _numEngagementsAfterExpiration;
    unsigned long long  _numEngagementsAfterShow;
    unsigned long long  _numEngagementsInUpcoming;
    unsigned long long  _numExpansions;
    unsigned long long  _numNotifications;
    NSString * _section;
    unsigned long long  _sectionPosition;
    unsigned long long  _sectionSize;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) double groupScore;
@property (nonatomic, retain) NSString *mnbUUID;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsAfterShow;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numExpansions;
@property (nonatomic) unsigned long long numNotifications;
@property (nonatomic, retain) NSString *section;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) unsigned long long sectionSize;

- (void).cxx_destruct;
- (id)bundleId;
- (id)coreAnalyticsDictionary;
- (double)groupScore;
- (id)metricName;
- (id)mnbUUID;
- (unsigned long long)numEngagementsAfterExpiration;
- (unsigned long long)numEngagementsAfterShow;
- (unsigned long long)numEngagementsInUpcoming;
- (unsigned long long)numExpansions;
- (unsigned long long)numNotifications;
- (void)populateMetricsFromDigestGroup:(id)arg1 mnbUUID:(id)arg2;
- (id)section;
- (unsigned long long)sectionPosition;
- (unsigned long long)sectionSize;
- (void)setBundleId:(id)arg1;
- (void)setGroupScore:(double)arg1;
- (void)setMnbUUID:(id)arg1;
- (void)setNumEngagementsAfterExpiration:(unsigned long long)arg1;
- (void)setNumEngagementsAfterShow:(unsigned long long)arg1;
- (void)setNumEngagementsInUpcoming:(unsigned long long)arg1;
- (void)setNumExpansions:(unsigned long long)arg1;
- (void)setNumNotifications:(unsigned long long)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionPosition:(unsigned long long)arg1;
- (void)setSectionSize:(unsigned long long)arg1;

@end
