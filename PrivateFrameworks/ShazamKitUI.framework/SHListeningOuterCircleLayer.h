
@interface SHListeningOuterCircleLayer : SHPaletteLayer {
    CALayer * _circleContainerLayer;
    CALayer * _circleLayer;
}

@property (nonatomic, retain) CALayer *circleContainerLayer;
@property (nonatomic, retain) CALayer *circleLayer;

- (void).cxx_destruct;
- (id)circleContainerLayer;
- (id)circleLayer;
- (void)layoutSublayers;
- (void)setCircleContainerLayer:(id)arg1;
- (void)setCircleLayer:(id)arg1;
- (void)setup;

@end
