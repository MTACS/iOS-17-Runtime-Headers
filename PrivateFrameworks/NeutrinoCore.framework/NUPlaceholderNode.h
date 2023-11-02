
@interface NUPlaceholderNode : NURenderNode

- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)initWithInputs:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (bool)isPlaceholderNode;

@end
