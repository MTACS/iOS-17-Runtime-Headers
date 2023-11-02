
@interface STKStickerMetadataUtilities : NSObject

+ (void)clearCachedPreviewsForStickerView:(id)arg1;
+ (long long)effectTypeForStickerEffectView:(id)arg1;
+ (id)encodeCGImage:(struct CGImage { }*)arg1 withStickerEffectType:(unsigned long long)arg2;
+ (id)encodeCGImageSource:(struct CGImageSource { }*)arg1 withStickerEffectType:(unsigned long long)arg2;
+ (id)encodeImage:(id)arg1 withStickerEffectType:(unsigned long long)arg2;
+ (id)encodeImageData:(id)arg1 withStickerEffectType:(unsigned long long)arg2;
+ (void)playSettlingAnimation:(id)arg1;
+ (void)setBoundsIncludeStroke:(bool)arg1 effectView:(id)arg2;
+ (void)stickerEffect:(id)arg1 applyWithWideStrokeToImage:(id)arg2 completion:(id /* block */)arg3;
+ (unsigned long long)stickerEffectTypeFromImageData:(id)arg1;
+ (unsigned long long)stickerEffectTypeFromString:(id)arg1;
+ (id)stringFromStickerEffectType:(unsigned long long)arg1;

@end
