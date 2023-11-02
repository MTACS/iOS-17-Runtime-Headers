
@protocol VKStickerEffectViewInternal <NSObject, _UIScrollViewScrollObserver>

@required

+ (double)extraScaleToIncludeStrokeWithEffectType:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (<VKStickerEffectInternal> *)_effect;
- (bool)boundsIncludeStroke;
- (float)curlPosition;
- (UIImage *)image;
- (id)initWithDevice:(id <MTLDevice>)arg1;
- (bool)isPaused;
- (void)playSettlingAnimation;
- (bool)reRenderOnMotion;
- (void)setBoundsIncludeStroke:(bool)arg1;
- (void)setCurlPosition:(float)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setReRenderOnMotion:(bool)arg1;
- (void)set_effect:(id <VKStickerEffectInternal>)arg1;
- (void)snapshotWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*

@end
