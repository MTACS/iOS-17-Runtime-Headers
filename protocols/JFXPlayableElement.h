
@protocol JFXPlayableElement <NSObject, JFXDepthDataReaderCreationAttributesProvider, JFXARMetadataReaderCreationAttributesProvider>

@required

- (int)duration;
- (bool)hasPlayableEffectOfType:(int)arg1;
- (bool)isAssetLoaded;
- (bool)isAssetUnavailable;
- (bool)isStill;
- (bool)isVideo;
- (JFXMediaItem *)mediaItem;
- (int)mediaStartOffset;
- (long long)mediaType;
- (NSData *)originalAnimojiDataRepresentation;
- (unsigned long long)originalAnimojiVersionNumber;
- (long long)playableAspectRatio;
- (long long)playableAspectRatioPreservationMode;
- (NSArray *)playableEffectStack;
- (NSArray *)playableEffectStackExcludingType:(int)arg1;
- (NSArray *)playableEffectsOfType:(int)arg1;
- (int)playableMediaContentMode;
- (struct CGSize { double x1; double x2; })playableMediaSizeWithTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })playableRectInOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (double)playableScaleInOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (int)presentationTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectFromNormalizedPlayableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inOutputSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)shouldRenderVideoAsBlack;
- (PVTransformAnimation *)transformAnimation;
- (NSString *)uuid;

@end
