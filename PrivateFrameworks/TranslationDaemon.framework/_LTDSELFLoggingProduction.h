
@interface _LTDSELFLoggingProduction : NSObject <_LTDSELFLoggingEndpoint>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_sendEventWithContext:(id)arg1 mtId:(id)arg2 sessionId:(id)arg3;
+ (void)appBackgroundedWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;
+ (void)cancelWithExists:(bool)arg1 reason:(id)arg2 qssSessionId:(id)arg3 mtId:(id)arg4 sessionId:(id)arg5;
+ (void)endSuccessfullyWithExists:(bool)arg1 qssSessionId:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;
+ (void)endWithError:(id)arg1 qssSessionId:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;
+ (void)frameworkRequestResponseReceivedWithFrameworkRequestId:(id)arg1 requestRoute:(long long)arg2 mtId:(id)arg3 sessionId:(id)arg4;
+ (void)frameworkRequestSentWithFrameworkRequestId:(id)arg1 qssSessionId:(id)arg2 requestType:(long long)arg3 requestRoute:(long long)arg4 requestSize:(unsigned long long)arg5 mtId:(id)arg6 sessionId:(id)arg7;
+ (void)startWithTask:(long long)arg1 inputMode:(long long)arg2 invocationType:(long long)arg3 interfaceMode:(long long)arg4 explicitLanguageFilterEnabled:(bool)arg5 languageIdentificationEnabled:(bool)arg6 onDevice:(bool)arg7 mtId:(id)arg8 sessionId:(id)arg9 translateAppContext:(id)arg10;
+ (void)userDismissedTextBoxWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;
+ (void)userPressedNextButtonWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;
+ (void)userTimeoutWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;

@end
