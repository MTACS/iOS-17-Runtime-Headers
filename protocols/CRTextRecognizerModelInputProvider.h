
@protocol CRTextRecognizerModelInputProvider <NSObject>

@required

- (NSObject<CRTextRecognizerModelInput> *)inputBatchFromLineRegions:(NSArray *)arg1 image:(CRImage *)arg2 regionWidth:(double)arg3 configuration:(CRNeuralRecognizerConfiguration *)arg4 rectifier:(CRMetalPolygonRectifier *)arg5;

@end
