
@protocol VisionCoreCamGazeClassifier <NSObject>

@required

- (bool)getGazeClassification:(long long*)arg1 fromGazeProbabilitiesOutputData:(NSData *)arg2 error:(id*)arg3;

@end
