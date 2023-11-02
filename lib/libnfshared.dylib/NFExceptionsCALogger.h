
@interface NFExceptionsCALogger : NSObject

+ (void)postAnalyticsCRSAuthECommerceWithParameters:(id)arg1;
+ (void)postAnalyticsCRSAuthInitEventWithStatus:(unsigned short)arg1;
+ (void)postAnalyticsCRSAuthWithStatus:(unsigned short)arg1 withMethod:(unsigned int)arg2;
+ (void)postAnalyticsCRSDeAuthWithStatus:(unsigned short)arg1;
+ (void)postAnalyticsHciTransactionException:(id)arg1 eventType:(id)arg2 commandResult:(id)arg3 status:(id)arg4;
+ (void)postAnalyticsMobileSoftwareUpdateExceptionEvent:(unsigned short)arg1;
+ (void)postAnalyticsOsResetEvent:(unsigned int)arg1 osID:(unsigned int)arg2 hardwareType:(unsigned int)arg3;
+ (void)postAnalyticsReaderModeExceptionForType:(unsigned int)arg1 tagType:(unsigned int)arg2 rfFrameInterface:(bool)arg3 withErrorCode:(unsigned int)arg4;
+ (void)postAnalyticsSERemovedEvent:(unsigned int)arg1 hasExpressTransactionStarted:(bool)arg2 hasCardEmulationStarted:(bool)arg3 hardwareType:(unsigned int)arg4;
+ (void)postAnalyticsSERestrictedModeEntered:(id)arg1;
+ (void)postAnalyticsSERestrictedModeExited:(unsigned int)arg1;
+ (void)postAnalyticsTSMConnectivityException:(unsigned int)arg1;
+ (void)postAnalyticsVASTransactionException:(unsigned int)arg1 withSWStatus:(unsigned short)arg2;
+ (void)postCASERestrictedModeExited:(unsigned int)arg1;
+ (void)postHardwareExceptionEventWithAssertionCounter:(unsigned int)arg1 hardwareType:(unsigned int)arg2 wdogDump:(unsigned int*)arg3 hwFltDump:(unsigned int*)arg4;
+ (void)postMiddlewareExceptionEvent:(unsigned int)arg1 mwVersion:(unsigned int)arg2 errorType:(unsigned int)arg3 errorCode:(unsigned int)arg4 breadcrumb:(unsigned long long)arg5;

@end
