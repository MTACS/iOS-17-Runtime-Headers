
@interface VCPImageHandsAnalyzer : VCPImageAnalyzer {
    VCPANSTHandsDetector * _anstHandsDetector;
    bool  _enableRejectHandsNearBoundaries;
    float  _extendRatio;
    NSArray * _handObjects;
    VCPCNNHandsDetector * _handsDetector;
    VCPCNNHandKeypointsDetector * _handsKeypointsDetector;
    int  _inputHeight;
    int  _inputWidth;
    float  _inset;
    int  _maxNumRegions;
    bool  _optimizeForDistance;
    NSString * _resConfig;
    NSMutableArray * _results;
    int  _sourceHeight;
    int  _sourceWidth;
}

@property (retain) NSArray *handObjects;
@property bool optimizeForDistance;

+ (float)getExtendRatio;
+ (float)getInsetForRejectingHands;

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 rotationInDegrees:(id)arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(id /* block */)arg5;
- (int)configForAspectRatio:(id)arg1;
- (int)convertSingleResultToDict:(struct CGPoint { double x1; double x2; })arg1 keypointConfidence:(float*)arg2 box:(id)arg3 results:(id)arg4;
- (long long)getClosestAspectRatio:(id)arg1;
- (id)handObjects;
- (id)init;
- (id)initWithKeypointsOption:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 enableHandDetection:(bool)arg4 enableANSTHandDetection:(bool)arg5 enableRejectHandsNearBoundaries:(bool)arg6 sourceWidth:(int)arg7 sourceHeight:(int)arg8 modelName:(id)arg9 revision:(int)arg10;
- (bool)keypointsOutsideInset:(struct CGPoint { double x1; double x2; })arg1 handRegion:(id)arg2;
- (bool)optimizeForDistance;
- (int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned int*)arg3;
- (void)setHandObjects:(id)arg1;
- (void)setOptimizeForDistance:(bool)arg1;
- (int)updateMaxNumHands:(id)arg1;
- (int)updateModelForSourceWidth:(int)arg1 sourceHeight:(int)arg2;

@end
