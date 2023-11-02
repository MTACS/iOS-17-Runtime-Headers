
@interface AVCompositionTrack : AVAssetTrack {
    AVCompositionTrackInternal * _priv;
}

@property (readonly) NSArray *formatDescriptionReplacements;
@property (nonatomic, readonly, copy) NSArray *segments;

- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (void)dealloc;
- (id)description;
- (id)formatDescriptionReplacements;
- (bool)isEnabled;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;

@end
