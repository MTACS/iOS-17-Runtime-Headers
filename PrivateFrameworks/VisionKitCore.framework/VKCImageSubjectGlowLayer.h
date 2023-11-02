
@interface VKCImageSubjectGlowLayer : CALayer {
    bool  _active;
    CALayer * _glowLayer;
    NSMutableDictionary * _subLayersMap;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) CALayer *glowLayer;
@property (nonatomic, retain) NSMutableDictionary *subLayersMap;

- (void).cxx_destruct;
- (bool)active;
- (id)animationGroupWithDuration:(double)arg1 beginTime:(double)arg2 animations:(id)arg3;
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3;
- (void)beginAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3 index:(long long)arg4 count:(long long)arg5 identifier:(id)arg6;
- (void)configureAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3 index:(long long)arg4 count:(long long)arg5 identifier:(id)arg6;
- (id)glowLayer;
- (void)hideGlow:(bool)arg1;
- (id)init;
- (void)renderGlowParameters:(id)arg1 path:(struct CGPath { }*)arg2 pathLength:(double)arg3 duration:(double)arg4 maxStrokeLengthFraction:(id)arg5 beginDelay:(double)arg6 identifier:(id)arg7;
- (void)setActive:(bool)arg1;
- (void)setGlowLayer:(id)arg1;
- (void)setSubLayersMap:(id)arg1;
- (id)shapeLayerLineWidth:(double)arg1 opacity:(double)arg2 path:(struct CGPath { }*)arg3;
- (void)stopAnimationAnimated:(bool)arg1;
- (void)stopAnimationForIdentifier:(id)arg1 animated:(bool)arg2;
- (id)subLayersMap;
- (id)thickGlowParametersWithViewScale:(double)arg1;
- (id)thinGlowParametersWithScreenScale:(double)arg1 viewScale:(double)arg2;

@end
