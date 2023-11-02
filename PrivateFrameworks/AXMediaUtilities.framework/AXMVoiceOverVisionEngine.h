
@interface AXMVoiceOverVisionEngine : AXMAXElementVisionEngine {
    AXMCaptionDetectorNode * _captionDetector;
    AXMFaceDetectorNode * _faceDetector;
    AXMMediaAnalysisCaptionDetectorNode * _madCaptionDetector;
    AXMMediaAnalysisFaceDetectorNode * _madFaceDetector;
    AXMMediaAnalysisSceneDetectorNode * _madSceneDetector;
    AXMMediaAnalysisTextDetectorNode * _madTextDetector;
    AXMNSFWDetectorNode * _nsfwDetector;
    AXMObjectDetectorNode * _objectDetector;
    AXMProminentObjectsDetectorNode * _prominentObjectsDetector;
    AXMSceneDetectorNode * _sceneDetector;
    AXMSignificantEventDetectorNode * _significantEventDetector;
    AXMTraitDetectorNode * _traitDetector;
}

@property (nonatomic) AXMCaptionDetectorNode *captionDetector;
@property (nonatomic) AXMFaceDetectorNode *faceDetector;
@property (nonatomic) unsigned long long genderStrategy;
@property (nonatomic) AXMMediaAnalysisCaptionDetectorNode *madCaptionDetector;
@property (nonatomic) AXMMediaAnalysisFaceDetectorNode *madFaceDetector;
@property (nonatomic) AXMMediaAnalysisSceneDetectorNode *madSceneDetector;
@property (nonatomic) AXMMediaAnalysisTextDetectorNode *madTextDetector;
@property (nonatomic) AXMNSFWDetectorNode *nsfwDetector;
@property (nonatomic) AXMObjectDetectorNode *objectDetector;
@property (nonatomic) AXMProminentObjectsDetectorNode *prominentObjectsDetector;
@property (nonatomic) AXMSceneDetectorNode *sceneDetector;
@property (nonatomic) AXMSignificantEventDetectorNode *significantEventDetector;
@property (nonatomic) AXMTraitDetectorNode *traitDetector;

- (void).cxx_destruct;
- (id)captionDetector;
- (id)configuredOptionsDisableAllDetectors:(id /* block */)arg1 elementOptions:(unsigned int)arg2 textRecognitionLevel:(id /* block */)arg3 textDetectionLocales:(id /* block */)arg4 preferringFullCaptions:(bool)arg5;
- (id)faceDetector;
- (unsigned long long)genderStrategy;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)madCaptionDetector;
- (id)madFaceDetector;
- (id)madSceneDetector;
- (id)madTextDetector;
- (id)nsfwDetector;
- (id)objectDetector;
- (id)prominentObjectsDetector;
- (id)sceneDetector;
- (void)setCaptionDetector:(id)arg1;
- (void)setFaceDetector:(id)arg1;
- (void)setGenderStrategy:(unsigned long long)arg1;
- (void)setMadCaptionDetector:(id)arg1;
- (void)setMadFaceDetector:(id)arg1;
- (void)setMadSceneDetector:(id)arg1;
- (void)setMadTextDetector:(id)arg1;
- (void)setNsfwDetector:(id)arg1;
- (void)setObjectDetector:(id)arg1;
- (void)setProminentObjectsDetector:(id)arg1;
- (void)setSceneDetector:(id)arg1;
- (void)setSignificantEventDetector:(id)arg1;
- (void)setTraitDetector:(id)arg1;
- (id)significantEventDetector;
- (id)traitDetector;

@end
