
@interface VCPRequest : NSObject {
    bool  _enableANSTHandDetection;
    bool  _enableHandDetection;
    bool  _enableHandPoseLite;
    bool  _enableRejectHandsNearBoundaries;
    int  _height;
    int  _humanActionWindowSize;
    int  _maxNumHands;
    int  _maxNumOfPersons;
    int  _maxNumPets;
    float  _minHandSize;
    unsigned int  _motionFlowComputationAccuracy;
    bool  _optimizeForDistance;
    unsigned int  _revision;
    bool  _useAsync;
    bool  _useCPUOnly;
    int  _width;
}

@property (nonatomic, readonly) unsigned int revision;
@property (nonatomic, readonly) bool useCPUOnly;

- (bool)cleanupWithOptions:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned int)preferredPixelFormat;
- (unsigned int)revision;
- (bool)updateWithOptions:(id)arg1 error:(id*)arg2;
- (bool)useCPUOnly;

@end
