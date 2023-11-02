
@interface AFMyriadMetrics : NSObject

+ (id)sharedInstance;

- (id)_createEndAnalyticContexFromIntermediateContext:(id)arg1 forVersion:(unsigned int)arg2 sessionId:(double)arg3;
- (void)_decisionMadeContext:(struct MyriadMetricsDataV1 { unsigned char x1; unsigned long long x2; unsigned char x3; unsigned long long x4; unsigned char x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20[50]; unsigned char x21; }*)arg1 additionalContext:(id)arg2 instrumentation:(id)arg3 completion:(id /* block */)arg4;
- (int)_getCDASchemaCDATriggerType:(unsigned long long)arg1;
- (id)_getRequestType:(unsigned long long)arg1;
- (void)_submitMyriadMetrics:(struct MyriadMetricsDataV1 { unsigned char x1; unsigned long long x2; unsigned char x3; unsigned long long x4; unsigned char x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20[50]; unsigned char x21; }*)arg1 additionalContext:(id)arg2 toStream:(id)arg3 instrumentation:(id)arg4 completion:(id /* block */)arg5;
- (id)getCDASessionId:(struct MyriadMetricsDataV1 { unsigned char x1; unsigned long long x2; unsigned char x3; unsigned long long x4; unsigned char x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20[50]; unsigned char x21; }*)arg1;
- (double)getSessionId:(struct MyriadMetricsDataV1 { unsigned char x1; unsigned long long x2; unsigned char x3; unsigned long long x4; unsigned char x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20[50]; unsigned char x21; }*)arg1;
- (unsigned int)getVersion:(struct MyriadMetricsDataV1 { unsigned char x1; unsigned long long x2; unsigned char x3; unsigned long long x4; unsigned char x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20[50]; unsigned char x21; }*)arg1;
- (bool)isMyriadMetricsMessage:(id)arg1;
- (void)submitAccessoryMyriadMetricsToAnalyticsStream:(id)arg1 payload:(id)arg2 additionalContext:(id)arg3 instrumentation:(id)arg4 completion:(id /* block */)arg5;
- (void)submitAccessoryMyriadMetricsToAnalyticsStream:(id)arg1 payload:(id)arg2 instrumentation:(id)arg3 completion:(id /* block */)arg4;
- (void)submitMyriadMetricsToAnalyticsStream:(id)arg1 context:(id)arg2 forEvent:(long long)arg3 contextNoCopy:(bool)arg4;

@end
