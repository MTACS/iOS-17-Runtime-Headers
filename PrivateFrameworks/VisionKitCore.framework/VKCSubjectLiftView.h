
@interface VKCSubjectLiftView : UIView {
    CALayer * _diffuseShadowLayer;
    CALayer * _rimShadowLayer;
    bool  _shadowsVisible;
}

@property (nonatomic) CALayer *diffuseShadowLayer;
@property (nonatomic) CALayer *rimShadowLayer;
@property (nonatomic) bool shadowsVisible;

- (void).cxx_destruct;
- (id)diffuseShadowLayer;
- (id)rimShadowLayer;
- (void)setDiffuseShadowLayer:(id)arg1;
- (void)setRimShadowLayer:(id)arg1;
- (void)setShadowsVisible:(bool)arg1;
- (bool)shadowsVisible;

@end
