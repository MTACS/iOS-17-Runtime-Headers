
@interface _MKAnimatedTileOverlay : MKTileOverlay {
    double  _duration;
    unsigned long long  _keyframesCount;
    bool  _shouldCrossfade;
    NSNumber * _visibleKeyframeOverride;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long keyframesCount;
@property (nonatomic) bool shouldCrossfade;

- (void).cxx_destruct;
- (id)URLForTilePath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 keyframeIndex:(unsigned long long)arg2;
- (void)cancelLoadingTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 keyframeIndex:(unsigned long long)arg2;
- (double)duration;
- (id)initWithURLTemplate:(id)arg1;
- (unsigned long long)keyframesCount;
- (void)loadTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 keyframeIndex:(unsigned long long)arg2 result:(id /* block */)arg3;
- (void)setDuration:(double)arg1;
- (void)setKeyframesCount:(unsigned long long)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (bool)shouldCrossfade;

@end
