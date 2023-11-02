
@interface SHListeningOuterCirclesLayer : SHPaletteLayer {
    NSArray * _outerCircleLayers;
}

@property (nonatomic, readonly) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (nonatomic, readonly) CAMediaTimingFunction *inOutSineTimingFunction;
@property (nonatomic, readonly) CAMediaTimingFunction *linearTimingFunction;
@property (nonatomic, retain) NSArray *outerCircleLayers;

- (void).cxx_destruct;
- (void)addCoreAnimationToOuterCircleLayer:(id)arg1 withStartOffset:(double)arg2;
- (void)addScaleAnimationToCircleLayer:(id)arg1;
- (id)buildOuterCircleLayers;
- (id)inOutQuartTimingFunction;
- (id)inOutSineTimingFunction;
- (void)layoutSublayers;
- (id)linearTimingFunction;
- (id)outerCircleCoreBorderWidthAnimation;
- (id)outerCircleCoreScaleAnimation;
- (id)outerCircleCoreSizeAnimation;
- (id)outerCircleLayers;
- (id)scaleNullAnimation;
- (void)setOuterCircleLayers:(id)arg1;
- (void)setup;
- (void)startListeningAnimation;

@end
