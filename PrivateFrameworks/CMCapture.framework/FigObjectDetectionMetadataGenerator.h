
@interface FigObjectDetectionMetadataGenerator : NSObject {
    NSObject<OS_dispatch_queue> * _detectObjectQueue;
    NSMutableArray * _figFaceObservations;
    NSMutableArray * _figHumanBodyObservations;
    bool  _humanFaceBlinkDetectionEnabled;
    bool  _humanFaceEyeDetectionEnabled;
    bool  _humanFaceSmileDetectionEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _maxCatBodies;
    unsigned int  _maxCatHeads;
    unsigned int  _maxDogBodies;
    unsigned int  _maxDogHeads;
    unsigned int  _maxHumanBodies;
    unsigned int  _maxHumanFaces;
    unsigned int  _maxHumanFullBodies;
    unsigned int  _maxHumanHeads;
    float  _maxMatchCost;
    unsigned int  _maxSalientObjects;
    unsigned int  _maxSportsBalls;
    unsigned long long  _metadataFaceID;
    unsigned long long  _metadataHumanBodyID;
    unsigned long long  _objectDetectionHostTime;
    unsigned int  _objectDetectionInterval;
    bool  _objectDetectionIsRunning;
    NSMutableDictionary * _objectMetadataDictionary;
    FTBipartiteMatcher * _objectTrackingMatcher;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferInSession;
    bool  _prepared;
    unsigned int  _previousDetectionsThreshold;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
    VNSession * _vnSession;
}

@property bool humanFaceBlinkDetectionEnabled;
@property bool humanFaceEyeDetectionEnabled;
@property bool humanFaceSmileDetectionEnabled;
@property unsigned int maxCatBodies;
@property unsigned int maxCatHeads;
@property unsigned int maxDogBodies;
@property unsigned int maxDogHeads;
@property unsigned int maxHumanBodies;
@property unsigned int maxHumanFaces;
@property unsigned int maxHumanFullBodies;
@property unsigned int maxHumanHeads;
@property unsigned int maxSalientObjects;
@property unsigned int maxSportsBalls;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

+ (void)initialize;

- (void)dealloc;
- (id)getDetectedObjectsForPixelBuffer:(struct __CVBuffer {}**)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)humanFaceBlinkDetectionEnabled;
- (bool)humanFaceEyeDetectionEnabled;
- (bool)humanFaceSmileDetectionEnabled;
- (id)init;
- (unsigned int)maxCatBodies;
- (unsigned int)maxCatHeads;
- (unsigned int)maxDogBodies;
- (unsigned int)maxDogHeads;
- (unsigned int)maxHumanBodies;
- (unsigned int)maxHumanFaces;
- (unsigned int)maxHumanFullBodies;
- (unsigned int)maxHumanHeads;
- (unsigned int)maxSalientObjects;
- (unsigned int)maxSportsBalls;
- (void)prepareForVideoFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (void)setHumanFaceBlinkDetectionEnabled:(bool)arg1;
- (void)setHumanFaceEyeDetectionEnabled:(bool)arg1;
- (void)setHumanFaceSmileDetectionEnabled:(bool)arg1;
- (void)setMaxCatBodies:(unsigned int)arg1;
- (void)setMaxCatHeads:(unsigned int)arg1;
- (void)setMaxDogBodies:(unsigned int)arg1;
- (void)setMaxDogHeads:(unsigned int)arg1;
- (void)setMaxHumanBodies:(unsigned int)arg1;
- (void)setMaxHumanFaces:(unsigned int)arg1;
- (void)setMaxHumanFullBodies:(unsigned int)arg1;
- (void)setMaxHumanHeads:(unsigned int)arg1;
- (void)setMaxSalientObjects:(unsigned int)arg1;
- (void)setMaxSportsBalls:(unsigned int)arg1;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)unprepare;

@end
