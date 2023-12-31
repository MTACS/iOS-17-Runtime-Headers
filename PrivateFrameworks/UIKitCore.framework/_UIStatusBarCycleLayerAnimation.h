
@interface _UIStatusBarCycleLayerAnimation : NSObject {
    CAAnimation * _animation;
    NSString * _key;
    CALayer * _layer;
    CAAnimation * _originalAnimation;
}

@property (nonatomic, retain) CAAnimation *animation;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) CALayer *layer;
@property (nonatomic, retain) CAAnimation *originalAnimation;

+ (id)cycleAnimationWithLayer:(id)arg1 animation:(id)arg2 key:(id)arg3;

- (void).cxx_destruct;
- (id)animation;
- (id)description;
- (id)key;
- (id)layer;
- (id)originalAnimation;
- (void)setAnimation:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setOriginalAnimation:(id)arg1;

@end
