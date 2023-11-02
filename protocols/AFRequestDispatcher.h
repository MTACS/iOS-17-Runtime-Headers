
@protocol AFRequestDispatcher <NSObject>

@required

- (void)cancelRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
- (NSArray *)commandsForDomain:(NSString *)arg1;
- (NSArray *)domains;
- (void)handleCommand:(void *)arg1 executionContextInfo:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: SABaseClientBoundCommand *, AFCommandExecutionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SAAceCommand> *, NSError *, void*
- (bool)implementsCommand:(NSString *)arg1 forDomain:(NSString *)arg2;
- (id)initWithRequestDispatcherServiceHelper:(id <AFRequestDispatcherServiceHelper>)arg1;
- (void)postTestResultCandidateWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 rcId:(NSString *)arg3 recognitionSausage:(AFSpeechRecognition *)arg4;
- (void)postTestResultSelectedWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 rcId:(NSString *)arg3;
- (void)requestCompletedWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)sendRequestContextWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 audioSource:(NSString *)arg3 audioDestination:(NSString *)arg4 responseMode:(NSString *)arg5 isEyesFree:(bool)arg6 isVoiceTriggerEnabled:(bool)arg7 isTextToSpeechEnabled:(bool)arg8 isTriggerlessFollowup:(bool)arg9 bargeInModes:(NSArray *)arg10 approximatePreviousTTSInterval:(NSDateInterval *)arg11 deviceRestrictions:(NSArray *)arg12 voiceTriggerEventInfo:(NSDictionary *)arg13 voiceAudioSessionId:(unsigned int)arg14 isSystemApertureEnabled:(bool)arg15;
- (void)startCorrectionSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 previousUtterance:(NSString *)arg5;
- (void)startDirectActionRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 directAction:(NSString *)arg4 requestExecutionParameters:(NSDictionary *)arg5;
- (void)startLocalRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3;
- (void)startSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 understandingOnDevice:(bool)arg3;
- (void)startSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 location:(CLLocation *)arg4;
- (void)startSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 location:(CLLocation *)arg4 asrOnServer:(bool)arg5;
- (void)startTestSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 enableASR:(bool)arg3 inputOrigin:(NSString *)arg4 location:(CLLocation *)arg5 jitContext:(NSArray *)arg6 overrideModelPath:(NSString *)arg7;
- (void)startTextRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4;
- (void)startUnderstandingOnServerRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3;

@optional

- (void)endDictationSessionWithAssistantId:(NSString *)arg1;
- (void)endSessionWithAssistantId:(NSString *)arg1;
- (id)initWithRequestDispatcherServiceHelper:(id <AFRequestDispatcherServiceHelper>)arg1 bridgeConnectionListeners:(NSArray *)arg2;
- (void)pauseDictationRecognitionWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)prewarmWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 prewarmOptions:(unsigned long long)arg3 sharedUserId:(NSString *)arg4;
- (void)requestFailedWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)resumeDictationRecognitionWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 prefixText:(NSString *)arg3 postfixText:(NSString *)arg4 selectedText:(NSString *)arg5;
- (void)sendRequestContextWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 audioSource:(NSString *)arg3 audioDestination:(NSString *)arg4 responseMode:(NSString *)arg5 isEyesFree:(bool)arg6 isVoiceTriggerEnabled:(bool)arg7 isTextToSpeechEnabled:(bool)arg8 isTriggerlessFollowup:(bool)arg9 bargeInModes:(NSArray *)arg10 approximatePreviousTTSInterval:(NSDateInterval *)arg11 deviceRestrictions:(NSArray *)arg12 voiceTriggerEventInfo:(NSDictionary *)arg13 voiceAudioSessionId:(unsigned int)arg14 isSystemApertureEnabled:(bool)arg15 isInAmbient:(bool)arg16;
- (bool)sessionExistsForAssistantId:(NSString *)arg1;
- (void)startCorrectionSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 previousUtterance:(NSString *)arg5 audioSource:(NSString *)arg6 audioDestination:(NSString *)arg7 responseMode:(NSString *)arg8 isEyesFree:(bool)arg9 isVoiceTriggerEnabled:(bool)arg10 isTextToSpeechEnabled:(bool)arg11 isTriggerlessFollowup:(bool)arg12 bargeInModes:(NSArray *)arg13 approximatePreviousTTSInterval:(NSDateInterval *)arg14 deviceRestrictions:(NSArray *)arg15 voiceTriggerEventInfo:(NSDictionary *)arg16 voiceAudioSessionId:(unsigned int)arg17 isSystemApertureEnabled:(bool)arg18;
- (void)startCorrectionSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 previousUtterance:(NSString *)arg5 audioSource:(NSString *)arg6 audioDestination:(NSString *)arg7 responseMode:(NSString *)arg8 isEyesFree:(bool)arg9 isVoiceTriggerEnabled:(bool)arg10 isTextToSpeechEnabled:(bool)arg11 isTriggerlessFollowup:(bool)arg12 bargeInModes:(NSArray *)arg13 approximatePreviousTTSInterval:(NSDateInterval *)arg14 deviceRestrictions:(NSArray *)arg15 voiceTriggerEventInfo:(NSDictionary *)arg16 voiceAudioSessionId:(unsigned int)arg17 isSystemApertureEnabled:(bool)arg18 isInAmbient:(bool)arg19;
- (void)startDirectActionRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 directAction:(NSString *)arg5 requestExecutionParameters:(NSDictionary *)arg6 audioSource:(NSString *)arg7 audioDestination:(NSString *)arg8 responseMode:(NSString *)arg9 isEyesFree:(bool)arg10 isVoiceTriggerEnabled:(bool)arg11 isTextToSpeechEnabled:(bool)arg12 isTriggerlessFollowup:(bool)arg13 bargeInModes:(NSArray *)arg14 approximatePreviousTTSInterval:(NSDateInterval *)arg15 deviceRestrictions:(NSArray *)arg16 voiceTriggerEventInfo:(NSDictionary *)arg17 voiceAudioSessionId:(unsigned int)arg18 isSystemApertureEnabled:(bool)arg19;
- (void)startDirectActionRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 directAction:(NSString *)arg5 requestExecutionParameters:(NSDictionary *)arg6 audioSource:(NSString *)arg7 audioDestination:(NSString *)arg8 responseMode:(NSString *)arg9 isEyesFree:(bool)arg10 isVoiceTriggerEnabled:(bool)arg11 isTextToSpeechEnabled:(bool)arg12 isTriggerlessFollowup:(bool)arg13 bargeInModes:(NSArray *)arg14 approximatePreviousTTSInterval:(NSDateInterval *)arg15 deviceRestrictions:(NSArray *)arg16 voiceTriggerEventInfo:(NSDictionary *)arg17 voiceAudioSessionId:(unsigned int)arg18 isSystemApertureEnabled:(bool)arg19 isInAmbient:(bool)arg20;
- (void)startSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 understandingOnDevice:(bool)arg3 sharedUserId:(NSString *)arg4;
- (void)startSpeechDictationRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 dictationOptions:(AFDictationOptions *)arg4;
- (void)startSpeechDictationSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 recognitionOnDevice:(bool)arg3;
- (void)startTextRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 audioSource:(NSString *)arg5 audioDestination:(NSString *)arg6 responseMode:(NSString *)arg7 isEyesFree:(bool)arg8 isVoiceTriggerEnabled:(bool)arg9 isTextToSpeechEnabled:(bool)arg10 isTriggerlessFollowup:(bool)arg11 bargeInModes:(NSArray *)arg12 approximatePreviousTTSInterval:(NSDateInterval *)arg13 deviceRestrictions:(NSArray *)arg14 voiceTriggerEventInfo:(NSDictionary *)arg15 voiceAudioSessionId:(unsigned int)arg16 isSystemApertureEnabled:(bool)arg17;
- (void)startTextRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 audioSource:(NSString *)arg5 audioDestination:(NSString *)arg6 responseMode:(NSString *)arg7 isEyesFree:(bool)arg8 isVoiceTriggerEnabled:(bool)arg9 isTextToSpeechEnabled:(bool)arg10 isTriggerlessFollowup:(bool)arg11 bargeInModes:(NSArray *)arg12 approximatePreviousTTSInterval:(NSDateInterval *)arg13 deviceRestrictions:(NSArray *)arg14 voiceTriggerEventInfo:(NSDictionary *)arg15 voiceAudioSessionId:(unsigned int)arg16 isSystemApertureEnabled:(bool)arg17 isInAmbient:(bool)arg18;
- (void)startUnderstandingDictationRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 dictationOptions:(AFDictationOptions *)arg4;
- (void)startUnderstandingDictationSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 understandingOnDevice:(bool)arg3;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4;

@end
