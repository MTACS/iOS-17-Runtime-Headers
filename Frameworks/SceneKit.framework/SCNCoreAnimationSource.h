
@interface SCNCoreAnimationSource : SCNImageSource {
    CALayer * _layer;
}

@property (nonatomic, retain) CALayer *layer;

- (void)dealloc;
- (bool)isOpaque;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)textureSource;

@end
