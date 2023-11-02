
@interface HKHRAFibBurdenSevenDayAnalysisBreadcrumbs : NSObject <NSSecureCoding> {
    NSDate * _alarmFiredDate;
    NSDate * _analysisEndedDate;
    NSDate * _analysisRetryLaterRequestedDate;
    NSDate * _analysisStartedDate;
    NSString * _lastAnalysisResultContext;
    NSDate * _lastAnalysisResultDate;
    NSDate * _maintenanceOperationRunDate;
    NSDate * _tachogramsClassifiedDate;
    NSDate * _xpcActivityFiredDate;
}

@property (nonatomic, retain) NSDate *alarmFiredDate;
@property (nonatomic, retain) NSDate *analysisEndedDate;
@property (nonatomic, retain) NSDate *analysisRetryLaterRequestedDate;
@property (nonatomic, retain) NSDate *analysisStartedDate;
@property (nonatomic, retain) NSString *lastAnalysisResultContext;
@property (nonatomic, retain) NSDate *lastAnalysisResultDate;
@property (nonatomic, retain) NSDate *maintenanceOperationRunDate;
@property (nonatomic, retain) NSDate *tachogramsClassifiedDate;
@property (nonatomic, retain) NSDate *xpcActivityFiredDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarmFiredDate;
- (id)analysisEndedDate;
- (id)analysisRetryLaterRequestedDate;
- (id)analysisStartedDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlarmFiredDate:(id)arg1 xpcActivityFiredDate:(id)arg2 maintenanceOperationRunDate:(id)arg3 analysisStartedDate:(id)arg4 tachogramsClassifiedDate:(id)arg5 analysisEndedDate:(id)arg6 analysisRetryLaterRequestedDate:(id)arg7 lastAnalysisResultDate:(id)arg8 lastAnalysisResultContext:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastAnalysisResultContext;
- (id)lastAnalysisResultDate;
- (id)maintenanceOperationRunDate;
- (void)setAlarmFiredDate:(id)arg1;
- (void)setAnalysisEndedDate:(id)arg1;
- (void)setAnalysisRetryLaterRequestedDate:(id)arg1;
- (void)setAnalysisStartedDate:(id)arg1;
- (void)setLastAnalysisResultContext:(id)arg1;
- (void)setLastAnalysisResultDate:(id)arg1;
- (void)setMaintenanceOperationRunDate:(id)arg1;
- (void)setTachogramsClassifiedDate:(id)arg1;
- (void)setXpcActivityFiredDate:(id)arg1;
- (id)tachogramsClassifiedDate;
- (id)xpcActivityFiredDate;

@end
