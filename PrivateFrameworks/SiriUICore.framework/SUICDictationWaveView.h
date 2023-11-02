
@interface SUICDictationWaveView : UIView {
    <SUICAudioPowerLevelDataSource> * _audioPowerLevelDataSource;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedFrame;
    CADisplayLink * _displayLink;
    float  _framesPerSecond;
    float  _initialOffset;
    float  _linearPowerLevel;
    float  _numberOfFrames;
    UIColor * _pipColor;
    NSMutableArray * _pipLayers;
    float  _powerLevel;
    float  _runningVolumeSum;
    SUICAudioLevelSmoother * _smoother;
}

@property (nonatomic) float powerLevel;

- (void).cxx_destruct;
- (void)_addNewPips;
- (void)_animateInPipsBetweenLeftIndex:(unsigned long long)arg1 rightIndex:(unsigned long long)arg2;
- (double)_heightForIntroAnimationPips;
- (float)_heightMultiplierForPipIndex:(unsigned long long)arg1;
- (double)_intervalForEachPipAnimation;
- (void)_introAnimationTick;
- (double)_leftMargin;
- (double)_maximumPipHeight;
- (double)_minimumPipHeight;
- (float)_noiseForPipIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfPips;
- (double)_originXForPipAtIndex:(unsigned long long)arg1;
- (double)_pipWidth;
- (void)_removeAllPips;
- (void)_resetPips;
- (void)_showPipsWithoutIntroAnimation;
- (float)_sinusoidalTaperForPipIndex:(unsigned long long)arg1;
- (float)_smoothStepTaperForPipIndex:(unsigned long long)arg1;
- (float)_smoothStepWithLowerBound:(float)arg1 upperBound:(float)arg2 innerValue:(float)arg3;
- (void)_startIntroAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_startingFrameForPipAtIndex:(unsigned long long)arg1;
- (void)_tick:(id)arg1;
- (void)_updatePipColor;
- (void)_updatePipHeightAtIndex:(unsigned long long)arg1 withHeight:(double)arg2;
- (void)_updatePipHeights;
- (void)animateIn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)powerLevel;
- (void)setAudioPowerLevelDataSource:(id)arg1;
- (void)setPipColor:(id)arg1;
- (void)setPowerLevel:(float)arg1;

@end
