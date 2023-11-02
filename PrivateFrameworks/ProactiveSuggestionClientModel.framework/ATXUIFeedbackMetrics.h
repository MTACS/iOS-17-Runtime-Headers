
@interface ATXUIFeedbackMetrics : NSObject {
    unsigned long long  _engagementCount;
    unsigned long long  _impressionCount;
    unsigned long long  _rejectionCount;
}

@property (nonatomic) unsigned long long engagementCount;
@property (nonatomic, readonly) double engagementRate;
@property (nonatomic) unsigned long long impressionCount;
@property (nonatomic) unsigned long long rejectionCount;
@property (nonatomic, readonly) double rejectionRate;

- (unsigned long long)engagementCount;
- (double)engagementRate;
- (unsigned long long)hash;
- (unsigned long long)impressionCount;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUIFeedbackMetrics:(id)arg1;
- (unsigned long long)rejectionCount;
- (double)rejectionRate;
- (void)setEngagementCount:(unsigned long long)arg1;
- (void)setImpressionCount:(unsigned long long)arg1;
- (void)setRejectionCount:(unsigned long long)arg1;

@end
