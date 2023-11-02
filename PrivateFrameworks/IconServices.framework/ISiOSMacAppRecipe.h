
@interface ISiOSMacAppRecipe : NSObject <ISCompositorRecipe>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)badgeRect;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

@end
