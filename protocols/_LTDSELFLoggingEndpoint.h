
@protocol _LTDSELFLoggingEndpoint <NSObject>

@required

+ (void)appBackgroundedWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)cancelWithExists:(bool)arg1 reason:(NSString *)arg2 qssSessionId:(SISchemaUUID *)arg3 mtId:(SISchemaUUID *)arg4 sessionId:(SISchemaUUID *)arg5;
+ (void)endSuccessfullyWithExists:(bool)arg1 qssSessionId:(SISchemaUUID *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)endWithError:(NSError *)arg1 qssSessionId:(SISchemaUUID *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)frameworkRequestResponseReceivedWithFrameworkRequestId:(SISchemaUUID *)arg1 requestRoute:(long long)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)frameworkRequestSentWithFrameworkRequestId:(SISchemaUUID *)arg1 qssSessionId:(NSString *)arg2 requestType:(long long)arg3 requestRoute:(long long)arg4 requestSize:(unsigned long long)arg5 mtId:(SISchemaUUID *)arg6 sessionId:(SISchemaUUID *)arg7;
+ (void)startWithTask:(long long)arg1 inputMode:(long long)arg2 invocationType:(long long)arg3 interfaceMode:(long long)arg4 explicitLanguageFilterEnabled:(bool)arg5 languageIdentificationEnabled:(bool)arg6 onDevice:(bool)arg7 mtId:(SISchemaUUID *)arg8 sessionId:(SISchemaUUID *)arg9 translateAppContext:(_LTSELFLoggingTranslateAppContext *)arg10;
+ (void)userDismissedTextBoxWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)userPressedNextButtonWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)userTimeoutWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;

@end
