
@interface ATXActionUserMetricsLog : NSObject <ATXUserMetricsLog> {
    ATXUserMetricsPBActionPredictionsMetricsLogEntry * _metric;
}

- (void).cxx_destruct;
- (double)enrollmentPeriod;
- (double)enrollmentRate;
- (id)getPBCodableWithUserId:(id)arg1;
- (id)initWithActionResponse:(id)arg1 abGroup:(id)arg2 rankOfFirstEngagement:(id)arg3 currentCalendar:(id)arg4;
- (id)scheme;

@end
