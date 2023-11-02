
@interface SRDRequestDispatcherInternal : NSObject {
    void aceCommandDispatcher;
    void afPreferences;
    void assetLogger;
    void broker;
    void instrumentationUtil;
    void messagePublisher;
    void rdmbQueue;
    void serviceHelper;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionUserId;
    void sessionsManager;
}

- (void).cxx_destruct;
- (void)cancelRequestWithAssistantId:(id)arg1 requestId:(id)arg2;
- (id)commandsForDomain:(id)arg1;
- (id)domains;
- (void)endDictationSessionWithAssistantId:(id)arg1;
- (void)endSessionWithAssistantId:(id)arg1 withDelay:(bool)arg2;
- (void)handleCommand:(id)arg1 executionContextInfo:(id)arg2 reply:(id /* block */)arg3;
- (bool)implementsCommand:(id)arg1 forDomain:(id)arg2;
- (id)init;
- (id)initWithRequestDispatcherServiceHelper:(id)arg1;
- (id)initWithRequestDispatcherServiceHelper:(id)arg1 bridgeConnectionListeners:(id)arg2;
- (void)pauseDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2;
- (void)postTestResultCandidateWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 recognitionSausage:(id)arg4;
- (void)postTestResultSelectedWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3;
- (void)prewarmWithAssistantId:(id)arg1 languageCode:(id)arg2 prewarmOptions:(unsigned long long)arg3 sharedUserId:(id)arg4;
- (void)requestCompletedWithAssistantId:(id)arg1 requestId:(id)arg2;
- (void)resumeDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2 prefixText:(id)arg3 postfixText:(id)arg4 selectedText:(id)arg5;
- (void)sendMultiUserInfoWithDeviceAssistantId:(id)arg1 multiUserInfo:(id)arg2 isRMVEnabled:(bool)arg3;
- (void)sendRequestContextWithAssistantId:(id)arg1 requestId:(id)arg2 audioSource:(id)arg3 audioDestination:(id)arg4 responseMode:(id)arg5 isEyesFree:(bool)arg6 isVoiceTriggerEnabled:(bool)arg7 isTextToSpeechEnabled:(bool)arg8 isTriggerlessFollowup:(bool)arg9 bargeInModes:(id)arg10 approximatePreviousTTSInterval:(id)arg11 deviceRestrictions:(id)arg12 voiceTriggerEventInfo:(id)arg13 voiceAudioSessionId:(unsigned int)arg14;
- (void)sendRequestContextWithAssistantId:(id)arg1 requestId:(id)arg2 audioSource:(id)arg3 audioDestination:(id)arg4 responseMode:(id)arg5 isEyesFree:(bool)arg6 isVoiceTriggerEnabled:(bool)arg7 isTextToSpeechEnabled:(bool)arg8 isTriggerlessFollowup:(bool)arg9 bargeInModes:(id)arg10 approximatePreviousTTSInterval:(id)arg11 deviceRestrictions:(id)arg12 voiceTriggerEventInfo:(id)arg13 voiceAudioSessionId:(unsigned int)arg14 isSystemApertureEnabled:(bool)arg15;
- (void)sendRequestContextWithAssistantId:(id)arg1 requestId:(id)arg2 audioSource:(id)arg3 audioDestination:(id)arg4 responseMode:(id)arg5 isEyesFree:(bool)arg6 isVoiceTriggerEnabled:(bool)arg7 isTextToSpeechEnabled:(bool)arg8 isTriggerlessFollowup:(bool)arg9 bargeInModes:(id)arg10 approximatePreviousTTSInterval:(id)arg11 deviceRestrictions:(id)arg12 voiceTriggerEventInfo:(id)arg13 voiceAudioSessionId:(unsigned int)arg14 isSystemApertureEnabled:(bool)arg15 isInAmbient:(bool)arg16;
- (bool)sessionExistsForAssistantId:(id)arg1;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 previousUtterance:(id)arg5;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 previousUtterance:(id)arg5 audioSource:(id)arg6 audioDestination:(id)arg7 responseMode:(id)arg8 isEyesFree:(bool)arg9 isVoiceTriggerEnabled:(bool)arg10 isTextToSpeechEnabled:(bool)arg11 isTriggerlessFollowup:(bool)arg12 bargeInModes:(id)arg13 approximatePreviousTTSInterval:(id)arg14 deviceRestrictions:(id)arg15 voiceTriggerEventInfo:(id)arg16 voiceAudioSessionId:(unsigned int)arg17 isSystemApertureEnabled:(bool)arg18;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 previousUtterance:(id)arg5 audioSource:(id)arg6 audioDestination:(id)arg7 responseMode:(id)arg8 isEyesFree:(bool)arg9 isVoiceTriggerEnabled:(bool)arg10 isTextToSpeechEnabled:(bool)arg11 isTriggerlessFollowup:(bool)arg12 bargeInModes:(id)arg13 approximatePreviousTTSInterval:(id)arg14 deviceRestrictions:(id)arg15 voiceTriggerEventInfo:(id)arg16 voiceAudioSessionId:(unsigned int)arg17 isSystemApertureEnabled:(bool)arg18 isInAmbient:(bool)arg19;
- (void)startDirectActionRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 directAction:(id)arg4 requestExecutionParameters:(id)arg5;
- (void)startDirectActionRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 directAction:(id)arg4 requestExecutionParameters:(id)arg5 audioSource:(id)arg6 audioDestination:(id)arg7 responseMode:(id)arg8 isEyesFree:(bool)arg9 isVoiceTriggerEnabled:(bool)arg10 isTextToSpeechEnabled:(bool)arg11 isTriggerlessFollowup:(bool)arg12 bargeInModes:(id)arg13 approximatePreviousTTSInterval:(id)arg14 deviceRestrictions:(id)arg15 voiceTriggerEventInfo:(id)arg16 voiceAudioSessionId:(unsigned int)arg17 isSystemApertureEnabled:(bool)arg18;
- (void)startDirectActionRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 directAction:(id)arg4 requestExecutionParameters:(id)arg5 audioSource:(id)arg6 audioDestination:(id)arg7 responseMode:(id)arg8 isEyesFree:(bool)arg9 isVoiceTriggerEnabled:(bool)arg10 isTextToSpeechEnabled:(bool)arg11 isTriggerlessFollowup:(bool)arg12 bargeInModes:(id)arg13 approximatePreviousTTSInterval:(id)arg14 deviceRestrictions:(id)arg15 voiceTriggerEventInfo:(id)arg16 voiceAudioSessionId:(unsigned int)arg17 isSystemApertureEnabled:(bool)arg18 isInAmbient:(bool)arg19;
- (void)startLocalRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;
- (void)startSessionWithAssistantId:(id)arg1 languageCode:(id)arg2;
- (void)startSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 understandingOnDevice:(bool)arg3;
- (void)startSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 understandingOnDevice:(bool)arg3 sharedUserId:(id)arg4;
- (void)startSpeechDictationRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 dictationOptions:(id)arg4;
- (void)startSpeechDictationSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 recognitionOnDevice:(bool)arg3;
- (void)startSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;
- (void)startSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 location:(id)arg4;
- (void)startSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 location:(id)arg4 asrOnServer:(bool)arg5;
- (void)startTestSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 enableASR:(bool)arg3 inputOrigin:(id)arg4 location:(id)arg5 jitContext:(id)arg6 overrideModelPath:(id)arg7;
- (void)startTestSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;
- (void)startTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4;
- (void)startTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 audioSource:(id)arg5 audioDestination:(id)arg6 responseMode:(id)arg7 isEyesFree:(bool)arg8 isVoiceTriggerEnabled:(bool)arg9 isTextToSpeechEnabled:(bool)arg10 isTriggerlessFollowup:(bool)arg11 bargeInModes:(id)arg12 approximatePreviousTTSInterval:(id)arg13 deviceRestrictions:(id)arg14 voiceTriggerEventInfo:(id)arg15 voiceAudioSessionId:(unsigned int)arg16 isSystemApertureEnabled:(bool)arg17;
- (void)startTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 audioSource:(id)arg5 audioDestination:(id)arg6 responseMode:(id)arg7 isEyesFree:(bool)arg8 isVoiceTriggerEnabled:(bool)arg9 isTextToSpeechEnabled:(bool)arg10 isTriggerlessFollowup:(bool)arg11 bargeInModes:(id)arg12 approximatePreviousTTSInterval:(id)arg13 deviceRestrictions:(id)arg14 voiceTriggerEventInfo:(id)arg15 voiceAudioSessionId:(unsigned int)arg16 isSystemApertureEnabled:(bool)arg17 isInAmbient:(bool)arg18;
- (void)startUnderstandingDictationRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 dictationOptions:(id)arg4;
- (void)startUnderstandingDictationSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 understandingOnDevice:(bool)arg3;
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4;

@end
