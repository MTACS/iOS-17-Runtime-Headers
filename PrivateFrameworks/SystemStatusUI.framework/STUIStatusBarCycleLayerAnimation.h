
@interface STUIStatusBarCycleLayerAnimation : NSObject <BSDebugDescriptionProviding> {
    CAAnimation * _animation;
    NSString * _key;
    CALayer * _layer;
    CAAnimation * _originalAnimation;
}

@property (nonatomic, retain) CAAnimation *animation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) CALayer *layer;
@property (nonatomic, retain) CAAnimation *originalAnimation;
@property (readonly) Class superclass;

+ (id)cycleAnimationWithLayer:(id)arg1 animation:(id)arg2 key:(id)arg3;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)animation;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)key;
- (id)layer;
- (id)originalAnimation;
- (void)setAnimation:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setOriginalAnimation:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
