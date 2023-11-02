
@interface DOCTagRenderer : NSObject

@property (nonatomic, readonly) bool differentiateWithShapes;

+ (bool)allowUnsizedSymbolImages;
+ (id)shared;

- (void)__drawInContext:(struct CGContext { }*)arg1 tag:(id)arg2 contextSize:(struct CGSize { double x1; double x2; })arg3 tagRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 blendMode:(int)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 traitCollection:(id)arg8;
- (double)_customRenderingBaselineOffsetFromBottomForRequest:(id)arg1;
- (double)_defaultBorderWidth;
- (void)_insertPrefixTextAttachment:(id)arg1 spacerAttributedString:(id)arg2 ensuringLayoutDirection:(long long)arg3 into:(id)arg4;
- (void)_renderInContext:(struct CGContext { }*)arg1 request:(id)arg2;
- (id)_spacerImageWithWidth:(double)arg1;
- (id)_symbolImageIfPosssibleForRequest:(id)arg1;
- (double)_tagChainSpacingForSpacingType:(unsigned long long)arg1 tagDimension:(double)arg2;
- (bool)differentiateWithShapes;
- (id)renderAttributedStringWithRequest:(id)arg1;
- (id)renderImageWithRequest:(id)arg1;
- (void)renderInUncacheableContext:(struct CGContext { }*)arg1 request:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeOfTagContentForRenderingRequest:(id)arg1;
- (id)tintedSystemImageForTag:(id)arg1;

@end
