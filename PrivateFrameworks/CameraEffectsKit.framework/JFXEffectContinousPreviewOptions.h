
@interface JFXEffectContinousPreviewOptions : JFXEffectPreviewOptions {
    unsigned long long  _backgroundType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _effectAnimationDuration;
    NSArray * _effectsToApplyToBackground;
    bool  _loopAnimation;
    unsigned int  _maxFramesRenderedAtATime;
    id /* block */  _renderPropertiesConfigurationBlock;
}

@property (nonatomic) unsigned long long backgroundType;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } effectAnimationDuration;
@property (nonatomic, retain) NSArray *effectsToApplyToBackground;
@property (nonatomic) bool loopAnimation;
@property (nonatomic) unsigned int maxFramesRenderedAtATime;
@property (nonatomic, copy) id /* block */ renderPropertiesConfigurationBlock;

- (void).cxx_destruct;
- (unsigned long long)backgroundType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })effectAnimationDuration;
- (id)effectsToApplyToBackground;
- (id)initContinousPreviewOptions;
- (bool)loopAnimation;
- (unsigned int)maxFramesRenderedAtATime;
- (id /* block */)renderPropertiesConfigurationBlock;
- (void)setBackgroundType:(unsigned long long)arg1;
- (void)setEffectAnimationDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setEffectsToApplyToBackground:(id)arg1;
- (void)setLoopAnimation:(bool)arg1;
- (void)setMaxFramesRenderedAtATime:(unsigned int)arg1;
- (void)setRenderPropertiesConfigurationBlock:(id /* block */)arg1;

@end
