
@interface STWeeklyReportUserNotificationContext : STUserNotificationContext {
    double  _deltaScreenTimeUsage;
    NSString * _notificationBodyKey;
    NSNumber * _totalOrAverageUsage;
    NSData * _weeklyReportData;
}

@property (nonatomic) double deltaScreenTimeUsage;
@property (nonatomic, retain) NSString *notificationBodyKey;
@property (nonatomic, copy) NSNumber *totalOrAverageUsage;
@property (nonatomic, retain) NSData *weeklyReportData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (double)deltaScreenTimeUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)notificationBodyKey;
- (void)setDeltaScreenTimeUsage:(double)arg1;
- (void)setDeltaScreenTimeUsage:(double)arg1 totalOrAverageUsage:(id)arg2 isLegacyOS:(bool)arg3;
- (void)setNotificationBodyKey:(id)arg1;
- (void)setTotalOrAverageUsage:(id)arg1;
- (void)setWeeklyReportData:(id)arg1;
- (id)totalOrAverageUsage;
- (id)weeklyReportData;

@end
