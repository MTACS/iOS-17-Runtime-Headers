
@interface _EARSpeechRecognizer : NSObject {
    bool  _allowUtteranceDelay;
    NSString * _aneContext;
    NSString * _bluetoothDeviceId;
    bool  _concatenateUtterances;
    NSString * _configPath;
    NSString * _cpuContext;
    _EARSpeechRecognitionAudioBuffer * _currentAudioBuffer;
    NSString * _currentLanguage;
    struct weak_ptr<ResultStreamWrapper> { 
        struct ResultStreamWrapper {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _currentResultStreamWrapper;
    unsigned long long  _currentSamplingRate;
    NSString * _currentTask;
    bool  _detectUtterances;
    NSString * _deviceId;
    bool  _disableAutoPunctuation;
    bool  _disablePartialResults;
    bool  _enableSpeakerCodeTraining;
    bool  _enableVoiceCommands;
    double  _endpointStart;
    NSSet * _endsOfSentencePunctuations;
    NSArray * _extraLmList;
    bool  _farField;
    bool  _formatAcrossUtterances;
    _EARFormatter * _formatter;
    NSObject<OS_dispatch_queue> * _formatterQueue;
    NSString * _gpuContext;
    bool  _highPriority;
    NSString * _inputOrigin;
    NSData * _jitProfileData;
    double  _latitude;
    NSArray * _leftContext;
    NSArray * _leftContextForItn;
    bool  _loadLmeForVoiceCommand;
    double  _longitude;
    double  _maximumRecognitionDuration;
    _EARSpeechModelInfo * _modelInfo;
    struct shared_ptr<EARModelInitializeContext> { 
        struct EARModelInitializeContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _modelInitializeContext;
    NSDictionary * _muxIdMask;
    NSDictionary * _muxIdReverseMask;
    NSSet * _muxIds;
    NSArray * _onScreenContextForEditLme;
    NSNumber * _overrideDoServerSideEndpointing;
    NSDictionary * _recognitionConfidenceSubtraction;
    _EARRecognitionMetrics * _recognitionMetrics;
    NSObject<OS_dispatch_queue> * _recognitionQueue;
    NSDictionary * _recognitionReplacements;
    bool  _recognizeEagerCandidates;
    bool  _recognizeEmoji;
    struct shared_ptr<quasar::SpeechRecognizer> { 
        struct SpeechRecognizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _recognizer;
    NSString * _refTranscriptForErrorBlaming;
    NSString * _rightContext;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _rightContextTokens;
    bool  _scoreNbest;
    NSArray * _scoreNbestExtraLmList;
    NSString * _selectedText;
    NSString * _sessionId;
    bool  _shouldGenerateVoiceCommandCandidates;
    _EARSpeakerCodeInfo * _speakerCodeInfo;
    _EARTokenizer * _tokenizer;
    struct shared_ptr<quasar::SpeakerCodeTraining> { 
        struct SpeakerCodeTraining {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _training;
    NSObject<OS_dispatch_queue> * _trainingQueue;
    NSString * _userId;
    NSData * _userProfileData;
    NSArray * _userProfiles;
    EARVoiceCommandActiveSet * _voiceCommandActiveSet;
    struct shared_ptr<const quasar::VoiceCommandActiveSetCompilation> { 
        struct VoiceCommandActiveSetCompilation {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _voiceCommandCompilation;
}

@property (nonatomic) bool allowUtteranceDelay;
@property (nonatomic, copy) NSString *aneContext;
@property (nonatomic, copy) NSString *bluetoothDeviceId;
@property (nonatomic) bool concatenateUtterances;
@property (nonatomic, readonly) NSString *configPath;
@property (nonatomic, copy) NSString *cpuContext;
@property (nonatomic) bool detectUtterances;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic) bool disableAutoPunctuation;
@property (nonatomic) bool disablePartialResults;
@property (nonatomic) bool enableSpeakerCodeTraining;
@property (nonatomic) bool enableVoiceCommands;
@property (nonatomic) double endpointStart;
@property (nonatomic, copy) NSArray *extraLmList;
@property (nonatomic) bool farField;
@property (nonatomic) bool formatAcrossUtterances;
@property (nonatomic, copy) NSString *gpuContext;
@property (nonatomic) bool highPriority;
@property (nonatomic, copy) NSString *inputOrigin;
@property (nonatomic, readonly) bool isContinuousListening;
@property (nonatomic, readonly) unsigned short itnEnablingFlags;
@property (nonatomic, copy) NSData *jitProfileData;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSArray *leftContext;
@property (nonatomic, copy) NSArray *leftContextForItn;
@property (nonatomic) double longitude;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic, readonly) _EARSpeechModelInfo *modelInfo;
@property (nonatomic, retain) NSNumber *overrideDoServerSideEndpointing;
@property (nonatomic, copy) NSDictionary *recognitionConfidenceSubtraction;
@property (nonatomic, copy) _EARRecognitionMetrics *recognitionMetrics;
@property (nonatomic, copy) NSDictionary *recognitionReplacements;
@property (nonatomic) bool recognizeEagerCandidates;
@property (nonatomic) bool recognizeEmoji;
@property (nonatomic, copy) NSString *refTranscriptForErrorBlaming;
@property (nonatomic, copy) NSString *rightContext;
@property (nonatomic) bool scoreNbest;
@property (nonatomic, copy) NSArray *scoreNbestExtraLmList;
@property (nonatomic, copy) NSString *selectedText;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic) bool shouldGenerateVoiceCommandCandidates;
@property (nonatomic, readonly) _EARSpeakerCodeInfo *speakerCodeInfo;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSData *userProfileData;
@property (nonatomic, readonly) EARVoiceCommandActiveSet *voiceCommandActiveSet;

+ (void)compileRecognizerModelsWithConfiguration:(id)arg1;
+ (void)initialize;
+ (id)maximumSupportedConfigurationVersion;
+ (id)minimumSupportedConfigurationVersion;
+ (void)purgeCompiledRecognizerModelsWithConfiguration:(id)arg1;
+ (id)rawTokenResultsFromRecognitionResults:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase {} *x1; struct __shared_weak_count {} *x2; })_audioBufferWithLangauge:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 userProfileData:(id)arg4 resultStream:(struct shared_ptr<quasar::RecogResultStreamBase> { struct RecogResultStreamBase {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (void)_restartActiveRecognition;
- (void)_setProfileContainers:(id)arg1 muxIds:(id)arg2;
- (id)_tokenizer;
- (id)_unmaskMuxPackages:(id)arg1;
- (void)_waitForAsyncRecogToFinish;
- (void)_waitForInitialization;
- (id)activeConfiguration;
- (bool)allowUtteranceDelay;
- (id)aneContext;
- (id)bluetoothDeviceId;
- (bool)canCloneIsFinalAsLastNonFinal;
- (void)cancelRecognition;
- (bool)concatenateUtterances;
- (id)configPath;
- (id)cpuContext;
- (bool)detectUtterances;
- (id)deviceId;
- (bool)disableAutoPunctuation;
- (bool)disablePartialResults;
- (void)dumpModelVirtualMemoryInfo;
- (bool)enableSpeakerCodeTraining;
- (bool)enableVoiceCommands;
- (double)endpointStart;
- (id)extraLmList;
- (bool)farField;
- (bool)formatAcrossUtterances;
- (int)getCachedTokensSize;
- (void)getFormatterWithBlock:(id /* block */)arg1;
- (struct shared_ptr<quasar::SpeechRecognizer> { struct SpeechRecognizer {} *x1; struct __shared_weak_count {} *x2; })getRecognizer;
- (id)gpuContext;
- (bool)highPriority;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8 enableSpeakerCodeTraining:(bool)arg9;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8 modelLoadingOptions:(id)arg9 enableSpeakerCodeTraining:(bool)arg10;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8 modelLoadingOptions:(id)arg9 enableSpeakerCodeTraining:(bool)arg10 supportEmojiRecognition:(bool)arg11;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8 modelLoadingOptions:(id)arg9 enableSpeakerCodeTraining:(bool)arg10 supportEmojiRecognition:(bool)arg11 voiceCommandActiveSet:(id)arg12;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8 modelLoadingOptions:(id)arg9 enableSpeakerCodeTraining:(bool)arg10 supportEmojiRecognition:(bool)arg11 voiceCommandActiveSet:(id)arg12 modelContextDelegate:(id)arg13;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 enableSpeakerCodeTraining:(bool)arg6;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 modelLoadingOptions:(id)arg6 enableSpeakerCodeTraining:(bool)arg7;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 modelLoadingOptions:(id)arg6 enableSpeakerCodeTraining:(bool)arg7 supportEmojiRecognition:(bool)arg8;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 modelLoadingOptions:(id)arg6 enableSpeakerCodeTraining:(bool)arg7 supportEmojiRecognition:(bool)arg8 voiceCommandActiveSet:(id)arg9;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 modelLoadingOptions:(id)arg6 enableSpeakerCodeTraining:(bool)arg7 supportEmojiRecognition:(bool)arg8 voiceCommandActiveSet:(id)arg9 modelContextDelegate:(id)arg10;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 modelLoadingOptions:(id)arg6 enableSpeakerCodeTraining:(bool)arg7 supportEmojiRecognition:(bool)arg8 voiceCommandActiveSet:(id)arg9 modelContextDelegate:(id)arg10 enableItn:(bool)arg11;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(bool)arg2;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(bool)arg2 activeConfiguration:(id)arg3;
- (id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3;
- (id)inputOrigin;
- (void)interruptTraining;
- (bool)isContinuousListening;
- (bool)isSpeakerCodeTrainingSupported:(id)arg1;
- (unsigned short)itnEnablingFlags;
- (id)jitProfileData;
- (double)latitude;
- (id)leftContext;
- (id)leftContextForItn;
- (double)longitude;
- (double)maximumRecognitionDuration;
- (id)modelInfo;
- (id)overrideDoServerSideEndpointing;
- (void)pauseRecognition;
- (id)recognitionConfidenceSubtraction;
- (id)recognitionMetrics;
- (id)recognitionReplacements;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6;
- (id)recognitionStatistics;
- (id)recognitionUtteranceInfos;
- (id)recognitionUtterenceStatistics;
- (bool)recognizeEagerCandidates;
- (bool)recognizeEmoji;
- (id)refTranscriptForErrorBlaming;
- (void)requestEagerResult:(id)arg1;
- (void)resumeRecognitionWithLeftContext:(id)arg1 rightContext:(id)arg2 selectedText:(id)arg3;
- (id)rightContext;
- (id)runRecognitionWithResultStream:(id)arg1;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 userProfileData:(id)arg5 speakerCodeWriter:(id)arg6;
- (id)runRecognitionWithResultStream:(id)arg1 speakerCodeWriter:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5;
- (bool)scoreNbest;
- (id)scoreNbestExtraLmList;
- (id)selectedText;
- (id)sessionId;
- (void)setActiveConfiguration:(id)arg1;
- (void)setAllowUtteranceDelay:(bool)arg1;
- (void)setAlternateRawRecognitionTokenSausage:(id)arg1;
- (void)setAneContext:(id)arg1;
- (void)setBluetoothDeviceId:(id)arg1;
- (void)setConcatenateUtterances:(bool)arg1;
- (void)setCpuContext:(id)arg1;
- (void)setDetectUtterances:(bool)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setDisableAutoPunctuation:(bool)arg1;
- (void)setDisablePartialResults:(bool)arg1;
- (void)setEnableSpeakerCodeTraining:(bool)arg1;
- (void)setEnableVoiceCommands:(bool)arg1;
- (void)setEndpointStart:(double)arg1;
- (void)setExtraLmList:(id)arg1;
- (void)setFarField:(bool)arg1;
- (void)setFormatAcrossUtterances:(bool)arg1;
- (void)setGpuContext:(id)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setInputOrigin:(id)arg1;
- (void)setJitProfileData:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLeftContext:(id)arg1;
- (void)setLeftContextForItn:(id)arg1;
- (void)setLeftContextText:(id)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setOverrideDoServerSideEndpointing:(id)arg1;
- (void)setRecognitionConfidenceSubtraction:(id)arg1;
- (void)setRecognitionMetrics:(id)arg1;
- (void)setRecognitionReplacements:(id)arg1;
- (void)setRecognizeEagerCandidates:(bool)arg1;
- (void)setRecognizeEmoji:(bool)arg1;
- (void)setRefTranscriptForErrorBlaming:(id)arg1;
- (void)setRightContext:(id)arg1;
- (void)setScoreNbest:(bool)arg1;
- (void)setScoreNbestExtraLmList:(id)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setShouldGenerateVoiceCommandCandidates:(bool)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserProfile:(id)arg1;
- (void)setUserProfileData:(id)arg1;
- (bool)shouldGenerateVoiceCommandCandidates;
- (id)speakerCodeInfo;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })splitWithTokenizer:(id)arg1 isLeftContext:(bool)arg2 shouldTruncate:(bool)arg3 outTokensInVocab:(id*)arg4;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })splitWithTokenizer:(id)arg1 outTokensInVocab:(id*)arg2 isLeftContext:(bool)arg3;
- (id)testFormattingWithOneBestResults:(id)arg1 uttMillis:(id)arg2;
- (id)tokenizeTextFromEnd:(id)arg1 withLimit:(unsigned long long)arg2 outTokensInVocab:(id*)arg3;
- (void)updateJitProfileData:(id)arg1;
- (void)updateUserProfileData:(id)arg1;
- (id)userId;
- (id)userProfileData;
- (id)voiceCommandActiveSet;
- (void)writeRecordedStateAccesses;

@end