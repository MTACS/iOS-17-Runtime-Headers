
@interface ATXMissedNotificationRankingEngagementMetric : _ATXCoreAnalyticsMetric {
    double  _createdTimestamp;
    double  _expireTimestamp;
    NSString * _mnbUUID;
    NSString * _nextModeSemanticType;
    unsigned long long  _numEngagementsAfterExpiration;
    unsigned long long  _numEngagementsAfterShow;
    unsigned long long  _numEngagementsInUpcoming;
    unsigned long long  _numExpansions;
    unsigned long long  _numMessageEngagements;
    unsigned long long  _numMessageGroups;
    unsigned long long  _numMessageNotifications;
    unsigned long long  _numOtherEngagements;
    unsigned long long  _numOtherGroups;
    unsigned long long  _numOtherNotifications;
    NSString * _previousModeSemanticType;
    double  _showTimestamp;
}

@property (nonatomic) double createdTimestamp;
@property (nonatomic) double expireTimestamp;
@property (nonatomic, retain) NSString *mnbUUID;
@property (nonatomic, retain) NSString *nextModeSemanticType;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsAfterShow;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numExpansions;
@property (nonatomic) unsigned long long numMessageEngagements;
@property (nonatomic) unsigned long long numMessageGroups;
@property (nonatomic) unsigned long long numMessageNotifications;
@property (nonatomic) unsigned long long numOtherEngagements;
@property (nonatomic) unsigned long long numOtherGroups;
@property (nonatomic) unsigned long long numOtherNotifications;
@property (nonatomic, retain) NSString *previousModeSemanticType;
@property (nonatomic) double showTimestamp;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (double)createdTimestamp;
- (double)expireTimestamp;
- (id)metricName;
- (id)mnbUUID;
- (id)nextModeSemanticType;
- (unsigned long long)numEngagementsAfterExpiration;
- (unsigned long long)numEngagementsAfterShow;
- (unsigned long long)numEngagementsInUpcoming;
- (unsigned long long)numExpansions;
- (unsigned long long)numMessageEngagements;
- (unsigned long long)numMessageGroups;
- (unsigned long long)numMessageNotifications;
- (unsigned long long)numOtherEngagements;
- (unsigned long long)numOtherGroups;
- (unsigned long long)numOtherNotifications;
- (void)populateMetricsFromRanking:(id)arg1;
- (id)previousModeSemanticType;
- (void)setCreatedTimestamp:(double)arg1;
- (void)setExpireTimestamp:(double)arg1;
- (void)setMnbUUID:(id)arg1;
- (void)setNextModeSemanticType:(id)arg1;
- (void)setNumEngagementsAfterExpiration:(unsigned long long)arg1;
- (void)setNumEngagementsAfterShow:(unsigned long long)arg1;
- (void)setNumEngagementsInUpcoming:(unsigned long long)arg1;
- (void)setNumExpansions:(unsigned long long)arg1;
- (void)setNumMessageEngagements:(unsigned long long)arg1;
- (void)setNumMessageGroups:(unsigned long long)arg1;
- (void)setNumMessageNotifications:(unsigned long long)arg1;
- (void)setNumOtherEngagements:(unsigned long long)arg1;
- (void)setNumOtherGroups:(unsigned long long)arg1;
- (void)setNumOtherNotifications:(unsigned long long)arg1;
- (void)setPreviousModeSemanticType:(id)arg1;
- (void)setShowTimestamp:(double)arg1;
- (double)showTimestamp;

@end
