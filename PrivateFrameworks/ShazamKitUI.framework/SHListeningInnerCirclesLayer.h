
@interface SHListeningInnerCirclesLayer : SHPaletteLayer {
    NSArray * _innerCircleLayers;
}

@property (nonatomic, readonly) CAMediaTimingFunction *inOutSineTimingFunction;
@property (nonatomic, retain) NSArray *innerCircleLayers;
@property (nonatomic, readonly) CAMediaTimingFunction *linearTimingFunction;

- (void).cxx_destruct;
- (void)addCoreAnimationToInnerCircleLayer:(id)arg1 withStartOffset:(double)arg2;
- (void)addScaleNullAnimationToInnerCircleLayer:(id)arg1;
- (id)buildInnerCircleLayers;
- (id)inOutSineTimingFunction;
- (id)innerCircleCoreAnimation;
- (id)innerCircleLayers;
- (id)innerCircleScaleNullAnimation;
- (void)layoutSublayers;
- (id)linearTimingFunction;
- (void)setInnerCircleLayers:(id)arg1;
- (void)setup;
- (void)startListeningAnimation;

@end
