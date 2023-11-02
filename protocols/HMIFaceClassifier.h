
@protocol HMIFaceClassifier

@required

- (HMIVideoAnalyzerEventFace *)classifyFaceEvent:(HMIVideoAnalyzerEventFace *)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 fastMode:(bool)arg3 homeUUID:(NSUUID *)arg4 error:(id*)arg5;

@end
