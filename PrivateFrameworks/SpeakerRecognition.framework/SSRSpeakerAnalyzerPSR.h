
@interface SSRSpeakerAnalyzerPSR : NSObject <EARSyncPSRAudioProcessorDelegate> {
    NSURL * _configFilePath;
    SSRSpeakerRecognitionContext * _context;
    <SSRSpeakerAnalyzerPSRDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _desRecordQueue;
    unsigned long long  _numSamplesProecssed;
    EARSyncPSRAudioProcessor * _psrAudioProcessor;
    NSArray * _psrScorers;
    NSURL * _resourceFilePath;
    bool  _triggerPhraseDetectedOnTap;
    NSDictionary * _voiceProfilesExpModelFilePaths;
    NSDictionary * _voiceProfilesModelFilePaths;
}

@property (nonatomic, retain) NSURL *configFilePath;
@property (nonatomic, retain) SSRSpeakerRecognitionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSRSpeakerAnalyzerPSRDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *desRecordQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EARSyncPSRAudioProcessor *psrAudioProcessor;
@property (nonatomic, retain) NSArray *psrScorers;
@property (nonatomic, retain) NSURL *resourceFilePath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *voiceProfilesExpModelFilePaths;
@property (nonatomic, retain) NSDictionary *voiceProfilesModelFilePaths;

- (void).cxx_destruct;
- (bool)_isSpeakerVectorValid:(id)arg1 speakerVectorSize:(unsigned long long)arg2 fromPsrAudioProcessor:(id)arg3;
- (id)_processSpeakerVector:(id)arg1 withSize:(unsigned long long)arg2 processedAudioDurationMs:(unsigned long long)arg3;
- (id)configFilePath;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)desRecordQueue;
- (void)endAudio;
- (id)getVoiceRecognizerResults;
- (id)initWithVoiceRecognitionContext:(id)arg1 delegate:(id)arg2;
- (void)processAudioData:(id)arg1;
- (id)psrAudioProcessor;
- (void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (id)psrScorers;
- (id)resetForNewRequest;
- (id)resourceFilePath;
- (void)setConfigFilePath:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesRecordQueue:(id)arg1;
- (void)setPsrAudioProcessor:(id)arg1;
- (void)setPsrScorers:(id)arg1;
- (void)setResourceFilePath:(id)arg1;
- (void)setVoiceProfilesExpModelFilePaths:(id)arg1;
- (void)setVoiceProfilesModelFilePaths:(id)arg1;
- (id)voiceProfilesExpModelFilePaths;
- (id)voiceProfilesModelFilePaths;

@end
