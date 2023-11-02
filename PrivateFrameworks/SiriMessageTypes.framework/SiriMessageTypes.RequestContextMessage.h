
@interface SiriMessageTypes.RequestContextMessage : SiriMessageTypes.RequestMessageBase {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  approximatePreviousTTSInterval;
    void audioDestination;
    void audioSource;
    void bargeInModes;
    void deviceRestrictions;
    void isEyesFree;
    void isInAmbient;
    void isSystemApertureEnabled;
    void isTextToSpeechEnabled;
    void isTriggerlessFollowup;
    void isVoiceTriggerEnabled;
    void responseMode;
    void voiceAudioSessionId;
    void voiceTriggerEventInfo;
}

- (void).cxx_destruct;

@end
