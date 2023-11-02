
@interface ISMultipleFilesRecipe : NSObject <ISCompositorRecipe>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)documentLayerWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPageFold:(bool)arg2 iconSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (id)hintedCornerSize;
- (id)hintedPageCurlSize;
- (id)hintedPaperRect;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedUnderPaperRect;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

@end
