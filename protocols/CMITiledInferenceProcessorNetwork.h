
@protocol CMITiledInferenceProcessorNetwork <NSObject>

@required

- (NSArray *)inputs;
- (long long)networkIndex;
- (NSArray *)outputs;

@end
