
@interface CDMAnalytics : NSObject

+ (id)constructContextUpdateOutcome:(int)arg1 numTurnsRollback:(int)arg2 locale:(id)arg3;
+ (void)recordCDMSetupFailureEvent:(id)arg1 withError:(id)arg2;
+ (void)recordCDMSetupSuccessEvent:(id)arg1;
+ (void)recordContextUpdateOutcome:(int)arg1 numTurnsRollback:(int)arg2 locale:(id)arg3;
+ (void)recordGraphFailureEvent:(id)arg1 withError:(id)arg2;
+ (void)recordGraphSuccessEvent:(id)arg1 withTopParserId:(id)arg2;
+ (void)recordReceivedNluRequestEvent:(id)arg1 withNluRequest:(id)arg2;

@end
