
@interface ISmacosDocumentRecipe1016 : NSObject <ISCompositorRecipe> {
    bool  _maskBadgeResource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool maskBadgeResource;
@property (readonly) Class superclass;

- (id)hintedBadgeRect;
- (id)hintedCornerSize;
- (id)hintedFontSize;
- (id)hintedPageCurlSize;
- (id)hintedPaperRect;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedShadowSpread;
- (id)hintedTextRect;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)maskBadgeResource;
- (void)setMaskBadgeResource:(bool)arg1;

@end
