
@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject {
    FigAlternateObjC * _figAlternateObjC;
    AVMediaSelectionOption * _mediaSelectionOption;
}

@property (getter=isBinaural, nonatomic, readonly) bool binaural;
@property (nonatomic, readonly) long long channelCount;
@property (getter=isDownmix, nonatomic, readonly) bool downmix;
@property (getter=isImmersive, nonatomic, readonly) bool immersive;

- (long long)channelCount;
- (void)dealloc;
- (id)initWithFigAlternateObjC:(id)arg1 mediaSelectionOption:(id)arg2;
- (bool)isBinaural;
- (bool)isDownmix;
- (bool)isImmersive;
- (double)sampleRate;

@end
