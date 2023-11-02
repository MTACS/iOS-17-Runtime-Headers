
@protocol HMICameraVideoFrameAnalyzer <NSObject>

@required

+ (NSDictionary *)classHierarchyMap;

- (NSSet *)analyzeBackgroundFrame:(HMIVideoFrame *)arg1 packageEvents:(NSSet *)arg2 newBackgroundEvents:(NSMutableSet *)arg3 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (NSSet *)analyzeFrame:(HMIVideoFrame *)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (NSSet *)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (HMIAnalysisStateUpdate *)flushAndGetAnalysisStateUpdateForHome:(NSUUID *)arg1 enableFaceClassification:(bool)arg2;
- (NSSet *)getAnalyzerEvents:(NSSet *)arg1 eventTriggers:(long long)arg2 enableFaceClassification:(bool)arg3 enableTorsoRecognition:(bool)arg4;
- (NSSet *)getPackageEvents:(NSSet *)arg1 foregroundEvents:(NSSet *)arg2 newBackgroundEvents:(NSMutableSet *)arg3 backgroundTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)init;
- (id)initWithMediumConfidenceThresholds:(NSDictionary *)arg1 highConfidenceThresholds:(NSDictionary *)arg2 analyzerConfiguration:(HMIVideoAnalyzerConfiguration *)arg3 error:(id*)arg4;
- (NSSet *)recognizeEvents:(NSSet *)arg1 frame:(HMIVideoFrame *)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 homeUUID:(NSUUID *)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterestForMotionDetections:(NSArray *)arg1 foregroundEvents:(NSSet *)arg2 frameSize:(struct CGSize { double x1; double x2; })arg3;

@end
