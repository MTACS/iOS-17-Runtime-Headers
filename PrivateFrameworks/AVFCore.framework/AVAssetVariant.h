
@interface AVAssetVariant : NSObject <NSSecureCoding> {
    AVAssetVariantAudioAttributes * _audioAttributes;
    FigAlternateObjC * _figAlternateObjC;
    struct OpaqueFigSimpleMutex { } * _mutex;
    AVAssetVariantVideoAttributes * _videoAttributes;
}

@property (nonatomic, readonly) AVAssetVariantAudioAttributes *audioAttributes;
@property (nonatomic, readonly) double averageBitRate;
@property (nonatomic, readonly) double peakBitRate;
@property (nonatomic, readonly) AVAssetVariantVideoAttributes *videoAttributes;

+ (bool)supportsSecureCoding;

- (struct OpaqueFigAlternate { }*)_figAlternate;
- (id)audioAttributes;
- (double)averageBitRate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { }*)arg1;
- (double)peakBitRate;
- (id)videoAttributes;

@end
