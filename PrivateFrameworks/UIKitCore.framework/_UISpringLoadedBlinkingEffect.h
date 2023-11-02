
@interface _UISpringLoadedBlinkingEffect : NSObject <UISpringLoadedInteractionEffect> {
    CALayer * _blinkLayer;
}

@property (nonatomic, retain) CALayer *blinkLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareLayer:(id)arg1 forView:(id)arg2;
- (id)blinkAnimation;
- (id)blinkLayer;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)setBlinkLayer:(id)arg1;

@end
