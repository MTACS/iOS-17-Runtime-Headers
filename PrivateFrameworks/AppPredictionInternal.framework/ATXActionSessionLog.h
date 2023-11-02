
@interface ATXActionSessionLog : NSObject {
    ATXActionResponse * _actionResponse;
    ATXPredictionContext * _context;
    unsigned long long  _engagementType;
    bool  _isShadowLog;
}

+ (double)_bucketize:(double)arg1 bucketSize:(double)arg2;
+ (bool)isLockscreenSession:(unsigned char)arg1;
+ (bool)isLowConfidenceSession:(id)arg1;
+ (bool)isSessionNotUsefulForTraining:(int)arg1 actionResponse:(id)arg2;
+ (bool)isSessionWithoutEngagement:(int)arg1;
+ (void)logActionData:(id)arg1;
+ (void)logIntentPredictionSession:(id)arg1;
+ (void)performSessionLoggingWithActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 context:(id)arg3 isShadowLog:(bool)arg4 forTestingMode:(bool)arg5;
+ (double)roundedElapsedTimeWithStartDate:(id)arg1 endDate:(id)arg2 accuracy:(double)arg3;

- (void).cxx_destruct;
- (id)constructActionDataDictionaryWithEngagedIndicesOut:(id*)arg1 andAWDActionOut:(id*)arg2 andEngagementTypeFound:(unsigned long long*)arg3 forTestingMode:(bool)arg4;
- (id)constructSessionLogDictionaryWithAWDSessionOut:(id*)arg1 forTestingMode:(bool)arg2;
- (id)init;
- (id)initWithActionEngagementType:(unsigned long long)arg1 actionResponse:(id)arg2 context:(id)arg3 isShadowLog:(bool)arg4;
- (void)performSessionLogging:(bool)arg1;

@end
