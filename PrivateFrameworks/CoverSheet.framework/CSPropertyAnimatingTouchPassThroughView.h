
@interface CSPropertyAnimatingTouchPassThroughView : SBFTouchPassThroughView <SBFCustomImplicitPropertyAnimating> {
    NSArray * animatedLayerProperties;
}

@property (nonatomic, copy) NSArray *animatedLayerProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)animatedLayerProperties;
- (void)setAnimatedLayerProperties:(id)arg1;

@end
