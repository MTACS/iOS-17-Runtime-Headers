
@protocol CRRecognizerFeatureProviding <NSObject>

@required

- (void)enumerateInputsForImage:(void *)arg1 lineRegions:(void *)arg2 rectifier:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 11: CRImage *, NSArray *, CRMetalPolygonRectifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, double, bool, void*
- (id)initWithConfiguration:(CRNeuralRecognizerConfiguration *)arg1 inputProvider:(NSObject<CRTextRecognizerModelInputProvider> *)arg2 error:(id*)arg3;

@end
