
@interface ISClippingRecipe : NSObject <ISCompositorRecipe> {
    IFColor * _badgeTintColor;
}

@property (retain) IFColor *badgeTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)badgeTintColor;
- (id)hintedBadgeRect;
- (id)hintedCornerSize;
- (id)hintedFontSize;
- (id)hintedPageCurlSize;
- (id)hintedPaperRect;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedTextRect;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setBadgeTintColor:(id)arg1;

@end
