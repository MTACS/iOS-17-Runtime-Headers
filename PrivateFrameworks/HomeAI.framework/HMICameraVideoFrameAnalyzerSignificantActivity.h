
@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMFLogging, HMICameraVideoFrameAnalyzer> {
    HMIVideoAnalyzerConfiguration * _analyzerConfiguration;
    NSMutableArray * _backgroundEvents;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _backgroundTimeStamp;
    HMIFaceClassifierVIP * _faceClassifier;
    NSDictionary * _highConfidenceThresholds;
    NSDictionary * _mediumConfidenceThresholds;
    HMISessionEntityManager * _sessionEntityManager;
    HMISignificantActivityFcosDetector * _significantActivityFcosDetector;
    HMITorsoClassifier * _torsoClassifier;
    HMFOSTransaction * _transaction;
}

@property (readonly) HMIVideoAnalyzerConfiguration *analyzerConfiguration;
@property (readonly) NSMutableArray *backgroundEvents;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } backgroundTimeStamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceClassifierVIP *faceClassifier;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *highConfidenceThresholds;
@property (readonly) struct CGSize { double x1; double x2; } inputDimensions;
@property (readonly) NSDictionary *mediumConfidenceThresholds;
@property (readonly) HMISessionEntityManager *sessionEntityManager;
@property (readonly) HMISignificantActivityFcosDetector *significantActivityFcosDetector;
@property (readonly) Class superclass;
@property (readonly) HMITorsoClassifier *torsoClassifier;
@property (nonatomic, retain) HMFOSTransaction *transaction;

+ (id)classHierarchyMap;
+ (id)desLabelIndexForEventClass:(Class)arg1;
+ (id)labelIndexForEventClass:(Class)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_analyzerEventsFromObjectDetections:(id)arg1;
- (id)_eventsWithClassificationsFromEvents:(id)arg1 videoFrame:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 homeUUID:(id)arg4;
- (id)_eventsWithSessionEntitiesFromEvents:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 homeUUID:(id)arg4;
- (id)_filterPackageEvents:(id)arg1 backgroundEvents:(id)arg2;
- (id)_predictEventsFromCropPixelBuffer:(struct __CVBuffer { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (id)_simulatedEventForEventClass:(Class)arg1;
- (id)_targetEventsSetFromEventTriggers:(long long)arg1 enableFaceClassification:(bool)arg2 enableTorsoRecognition:(bool)arg3;
- (id)analyzeBackgroundFrame:(id)arg1 packageEvents:(id)arg2 newBackgroundEvents:(id)arg3 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)analyzeFrame:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (id)analyzerConfiguration;
- (id)backgroundEvents;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })backgroundTimeStamp;
- (id)eventsWithFaceEventsFromTorsoEventsFromEvents:(id)arg1 homeUUID:(id)arg2;
- (id)faceClassifier;
- (id)flushAndGetAnalysisStateUpdateForHome:(id)arg1 enableFaceClassification:(bool)arg2;
- (id)getAnalyzerEvents:(id)arg1 eventTriggers:(long long)arg2 enableFaceClassification:(bool)arg3 enableTorsoRecognition:(bool)arg4;
- (id)getPackageEvents:(id)arg1 foregroundEvents:(id)arg2 newBackgroundEvents:(id)arg3 backgroundTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)highConfidenceThresholds;
- (id)initWithMediumConfidenceThresholds:(id)arg1 highConfidenceThresholds:(id)arg2 analyzerConfiguration:(id)arg3 error:(id*)arg4;
- (struct CGSize { double x1; double x2; })inputDimensions;
- (id)mediumConfidenceThresholds;
- (id)recognizeEvents:(id)arg1 frame:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 homeUUID:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterestForMotionDetections:(id)arg1 foregroundEvents:(id)arg2 frameSize:(struct CGSize { double x1; double x2; })arg3;
- (id)sessionEntityManager;
- (void)setBackgroundTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTransaction:(id)arg1;
- (id)significantActivityFcosDetector;
- (id)torsoClassifier;
- (id)transaction;

@end
