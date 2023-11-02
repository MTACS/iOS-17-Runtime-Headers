
@protocol LTMAlgorithmBase <NSObject>

@required

- (int)allocateResources;
- (id)initWithMetalContext:(FigMetalContext *)arg1;
- (int)prewarmShaders;
- (int)purgeResources;

@end
