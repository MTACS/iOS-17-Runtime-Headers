
@interface CSVoiceTriggerFileLogger : NSObject <CSSelfTriggerDetectorDelegate, CSVoiceTriggerDelegate> {
    bool  _fileLoggingEnabled;
    bool  _geckoLoggingEnabled;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpeechManager * _speechManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fileLoggingEnabled;
@property (nonatomic) bool geckoLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSpeechManager *speechManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_audioLogDirectory;
- (void)_clearOldGeckoLoggingFiles;
- (void)_clearOldLoggingFiles;
- (id)_geckoLogDirectory;
- (void)_logGeckoWithFilePrefix:(id)arg1 WithResult:(id)arg2;
- (void)_logVTResult:(id)arg1 metaFilePath:(id)arg2 audioFilePath:(id)arg3 completion:(id /* block */)arg4;
- (id)_metaFilenameWithRootDir:(id)arg1 prefix:(id)arg2 deviceId:(id)arg3;
- (void)_notifyFalseRejectFeedbackBanner:(id)arg1;
- (bool)_shouldLogDeviceId:(id)arg1;
- (bool)_shouldSkipLogging:(id)arg1;
- (id)_timeStampString;
- (void)_writeDictionary:(id)arg1 toPath:(id)arg2;
- (bool)fileLoggingEnabled;
- (bool)geckoLoggingEnabled;
- (id)init;
- (id)initWithSpeechManager:(id)arg1 fileLoggingEnabled:(bool)arg2 geckoLoggingEnabled:(bool)arg3;
- (id)queue;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;
- (void)setFileLoggingEnabled:(bool)arg1;
- (void)setGeckoLoggingEnabled:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (id)speechManager;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;

@end
