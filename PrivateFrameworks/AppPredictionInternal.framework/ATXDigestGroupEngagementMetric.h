
@interface ATXDigestGroupEngagementMetric : _ATXCoreAnalyticsMetric {
    NSString * _bundleId;
    NSString * _digestUUID;
    double  _groupScore;
    bool  _hasImage;
    unsigned long long  _numEngagementsAfterExpiration;
    unsigned long long  _numEngagementsInScheduled;
    unsigned long long  _numEngagementsInUpcoming;
    unsigned long long  _numExpansions;
    unsigned long long  _numNotifications;
    NSString * _section;
    unsigned long long  _sectionPosition;
    unsigned long long  _sectionSize;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *digestUUID;
@property (nonatomic) double groupScore;
@property (nonatomic) bool hasImage;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numExpansions;
@property (nonatomic) unsigned long long numNotifications;
@property (nonatomic, retain) NSString *section;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) unsigned long long sectionSize;

- (void).cxx_destruct;
- (id)bundleId;
- (id)coreAnalyticsDictionary;
- (id)digestUUID;
- (double)groupScore;
- (bool)hasImage;
- (id)metricName;
- (unsigned long long)numEngagementsAfterExpiration;
- (unsigned long long)numEngagementsInScheduled;
- (unsigned long long)numEngagementsInUpcoming;
- (unsigned long long)numExpansions;
- (unsigned long long)numNotifications;
- (void)populateMetricsFromDigestGroup:(id)arg1 digestUUID:(id)arg2;
- (id)section;
- (unsigned long long)sectionPosition;
- (unsigned long long)sectionSize;
- (void)setBundleId:(id)arg1;
- (void)setDigestUUID:(id)arg1;
- (void)setGroupScore:(double)arg1;
- (void)setHasImage:(bool)arg1;
- (void)setNumEngagementsAfterExpiration:(unsigned long long)arg1;
- (void)setNumEngagementsInScheduled:(unsigned long long)arg1;
- (void)setNumEngagementsInUpcoming:(unsigned long long)arg1;
- (void)setNumExpansions:(unsigned long long)arg1;
- (void)setNumNotifications:(unsigned long long)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionPosition:(unsigned long long)arg1;
- (void)setSectionSize:(unsigned long long)arg1;

@end
