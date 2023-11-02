
@interface SGMIFollowUpAnalyzer : NSObject

+ (id)_analyzeFeatureVector:(id)arg1 withRegExpDictionary:(id)arg2 forOutgoingMail:(bool)arg3 withDetectedLanguage:(id)arg4 withRegExLanguage:(id)arg5 withCustomTimeRange:(bool)arg6;
+ (id)_analyzeForFollowUpMailWithBody:(id)arg1 isSent:(bool)arg2 messageId:(id)arg3 date:(id)arg4;
+ (id)analyzeBody:(id)arg1 forLanguage:(id)arg2 forDate:(id)arg3 withCustomTimeRange:(bool)arg4;
+ (id)analyzeFeatureVector:(id)arg1;
+ (id)analyzeForFollowUpMailWithBody:(id)arg1 isSent:(bool)arg2 messageId:(id)arg3 date:(id)arg4;
+ (id)analyzeIncomingMailFeatureVector:(id)arg1;
+ (id)analyzeOutgoingMailFeatureVector:(id)arg1;
+ (id)identifyFollowUpWarningFromSubject:(id)arg1 body:(id)arg2 date:(id)arg3;
+ (void)logFollowUpStatsAndSetting;
+ (void)reportUserEngagement:(long long)arg1 forWarning:(id)arg2;

@end
