
@interface FigAlternateObjCAudioAttributes : FigKVCInspectable {
    struct OpaqueFigAlternate { } * _alternate;
    NSArray * _formatIDs;
    struct OpaqueFigSimpleMutex { } * _mutex;
}

@property (nonatomic, readonly) NSArray *formatIDs;

- (long long)channelCountForMediaOption:(id)arg1;
- (void)dealloc;
- (id)formatIDs;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { }*)arg1;
- (bool)isBinauralMediaOption:(id)arg1;
- (bool)isDownmixMediaOption:(id)arg1;
- (bool)isImmersiveMediaOption:(id)arg1;
- (double)sampleRateForMediaOption:(id)arg1;

@end
