
@interface ISCompositor : NSObject {
    NSMutableArray * _elements;
    unsigned long long  _renderingMode;
    CIContext * _sharedCIContext;
}

@property (readonly) bool canUseCoreImage;
@property (retain) NSMutableArray *elements;
@property (retain) <ISCompositorRecipe> *recipe;
@property unsigned long long renderingMode;
@property (readonly) CIContext *sharedCIContext;

- (void).cxx_destruct;
- (void)addElement:(id)arg1;
- (void)addElementWithRecipe:(id)arg1 resources:(id)arg2;
- (void)addResourcesFromDictionary:(id)arg1;
- (bool)canUseCoreImage;
- (bool)canUseCoreImageForEffects;
- (void)clearResources;
- (void)dealloc;
- (void)drawElement:(id)arg1 inContext:(id)arg2;
- (void)drawInContext:(id)arg1;
- (void)drawLayer:(id)arg1 resourceProvider:(id)arg2 inContext:(id)arg3;
- (id)elements;
- (id)filterForLayer:(id)arg1 scale:(double)arg2 resourceProvider:(id)arg3;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)init;
- (id)initWithRecipe:(id)arg1;
- (id)maskImageForLayer:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 resourceProvider:(id)arg4;
- (id)recipe;
- (unsigned long long)renderingMode;
- (void)reset;
- (id)scaledImageFromContent:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 needsScaled:(bool*)arg4;
- (void)setElements:(id)arg1;
- (void)setRecipe:(id)arg1;
- (void)setRenderingMode:(unsigned long long)arg1;
- (void)setResource:(id)arg1 named:(id)arg2;
- (id)sharedCIContext;

@end
