
@interface ISOverlayEmbossRecipe : NSObject <ISCompositorRecipe> {
    unsigned long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned long long variant;

- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setVariant:(unsigned long long)arg1;
- (unsigned long long)variant;

@end
