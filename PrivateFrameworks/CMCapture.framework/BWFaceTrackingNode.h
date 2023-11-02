
@interface BWFaceTrackingNode : BWNode {
    bool  _addDebugInfo;
    bool  _addMesh;
    int  _faceTrackingMachThreadPriority;
    int  _faceTrackingMaxFaces;
    float  _faceTrackingNetworkFailureThresholdMultiplier;
    bool  _faceTrackingPlusEnabled;
    struct CVAFaceTracking { } * _faceTrackingRef;
    bool  _faceTrackingUsesFaceRecognition;
    bool  _frontCamera;
    bool  _mirrored;
    struct opaqueCMSimpleQueue { } * _nextSbufQueue;
    int  _orientation;
    int  _pearlModuleType;
    bool  _processing;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processingLock;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_semaphore> * _processingSemaphore;
    bool  _setupDone;
    bool  _structuredLightOccluded;
}

@property (nonatomic) bool faceTrackingPlusEnabled;
@property (nonatomic) bool frontCamera;
@property (nonatomic) int maxFaces;
@property (nonatomic) bool mirrored;
@property (nonatomic) float networkFailureThresholdMultiplier;
@property (nonatomic) int orientation;
@property (nonatomic) bool usesFaceRecognition;

+ (void)initialize;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (bool)faceTrackingPlusEnabled;
- (bool)frontCamera;
- (id)initWithFigThreadPriority:(unsigned int)arg1 pearlModuleType:(int)arg2 queueDepth:(int)arg3;
- (int)maxFaces;
- (bool)mirrored;
- (float)networkFailureThresholdMultiplier;
- (id)nodeSubType;
- (id)nodeType;
- (int)orientation;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setFaceTrackingPlusEnabled:(bool)arg1;
- (void)setFrontCamera:(bool)arg1;
- (void)setMaxFaces:(int)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setNetworkFailureThresholdMultiplier:(float)arg1;
- (void)setOrientation:(int)arg1;
- (void)setUsesFaceRecognition:(bool)arg1;
- (bool)usesFaceRecognition;

@end
