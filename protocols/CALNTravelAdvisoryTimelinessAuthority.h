
@protocol CALNTravelAdvisoryTimelinessAuthority <NSObject>

@required

- (unsigned long long)periodForHypothesis:(EKTravelEngineHypothesis *)arg1;
- (NSDate *)startOfLeaveNowPeriodForHypothesis:(EKTravelEngineHypothesis *)arg1;
- (NSDate *)startOfRunningLatePeriodForHypothesis:(EKTravelEngineHypothesis *)arg1;

@end
