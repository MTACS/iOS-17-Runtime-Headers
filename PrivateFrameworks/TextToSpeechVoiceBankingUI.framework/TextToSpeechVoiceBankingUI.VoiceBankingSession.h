
@interface TextToSpeechVoiceBankingUI.VoiceBankingSession : NSObject {
    void $__lazy_storage_$_keepScreenAwakeManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _configurationStage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sample;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _script;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _speechRecognitionDownloadProgress;
    void service;
    void trainingScriptItems;
    void voiceBankingManager;
    void voiceBankingNetworkModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  voiceID;
}

- (void).cxx_destruct;
- (id)init;

@end
