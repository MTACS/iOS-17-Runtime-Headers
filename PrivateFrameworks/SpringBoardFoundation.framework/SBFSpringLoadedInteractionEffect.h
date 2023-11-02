
@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect> {
    <UISpringLoadedInteractionEffect> * _blinkEffect;
    <SBFSpringLoadedInteractionEffectDelegate> * _delegate;
    bool  _useFastBlinkAnimation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFSpringLoadedInteractionEffectDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useFastBlinkAnimation;

- (void).cxx_destruct;
- (id)delegate;
- (id)fastBlinkAnimation;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUseFastBlinkAnimation:(bool)arg1;
- (bool)useFastBlinkAnimation;

@end
