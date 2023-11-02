
@interface _LTLanguageDetector : NSObject <CSLanguageDetectorDelegate> {
    NSMutableArray * _acousticResults;
    long long  _audioBitDepth;
    _LTTranslationContext * _context;
    CSLanguageDetector * _csLanguageDetector;
    <_LTSpeechTranslationDelegate> * _delegate;
    bool  _endAudioCalled;
    _LTLanguageDetectorFeatureCombinationModel * _featureCombinationModel;
    bool  _featureCombinationModelSupported;
    bool  _finalLIDResultSent;
    NSObject<OS_dispatch_queue> * _finalResultWaitQueue;
    NSMutableDictionary * _finalSpeechResults;
    bool  _havePartialASRConfidences;
    _LTLanguageDetectionResult * _lastResult;
    unsigned long long  _lidSignpostID;
    unsigned long long  _maximumAcousticLanguageDetectorResults;
    unsigned long long  _minimumAcousticLanguageDetectorResults;
    NSMutableDictionary * _modelVersions;
    NSMutableDictionary * _partialSpeechResultConfidences;
    bool  _receivedPartialSpeechResult;
    NSObject<OS_dispatch_queue> * _resultQueue;
    double  _samplingRate;
    _LTDSELFLoggingManager * _selfLoggingManager;
    float  _sourceLocaleConfidenceThreshold;
    float  _targetLocaleConfidenceThreshold;
    bool  _useFinalThresholds;
}

@property (nonatomic, retain) NSMutableArray *acousticResults;
@property (nonatomic) long long audioBitDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _LTLanguageDetectorFeatureCombinationModel *featureCombinationModel;
@property (nonatomic) bool featureCombinationModelSupported;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _LTLanguageDetectionResult *lastResult;
@property (nonatomic) double samplingRate;
@property (nonatomic, readonly, retain) _LTDSELFLoggingManager *selfLoggingManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acousticResults;
- (void)addSpeechAudioData:(id)arg1;
- (void)addSpeechRecognitionResult:(id)arg1;
- (long long)audioBitDepth;
- (void)cancelLanguageDetection;
- (void)endAudio;
- (id)featureCombinationModel;
- (bool)featureCombinationModelSupported;
- (bool)forceLanguageDetectionResult;
- (bool)haveAtLeastOneFinalASRResult;
- (bool)haveFinalASRResults;
- (id)initWithSelfLoggingManager:(id)arg1;
- (void)languageDetectorDidDetectLanguageWithConfidence:(id)arg1 confidence:(id)arg2 isConfident:(bool)arg3;
- (id)lastResult;
- (double)samplingRate;
- (id)selfLoggingManager;
- (void)sendFinalLanguageDetectionResult:(bool)arg1;
- (void)sendLIDResult:(id)arg1;
- (void)setAcousticResults:(id)arg1;
- (void)setAudioBitDepth:(long long)arg1;
- (void)setFeatureCombinationModel:(id)arg1;
- (void)setFeatureCombinationModelSupported:(bool)arg1;
- (void)setLastResult:(id)arg1;
- (void)setSamplingRate:(double)arg1;
- (void)startLanguageDetectionWithContext:(id)arg1 delegate:(id)arg2;

@end
