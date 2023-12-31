
@interface _UIViewAnimationWithComposerWrapper : NSObject {
    <UIIntervalAnimating> * _animation;
    <UIViewAnimationComposing> * _composer;
}

@property (nonatomic, retain) <UIIntervalAnimating> *animation;
@property (nonatomic, retain) <UIViewAnimationComposing> *composer;

+ (id)instanceWithAnimation:(id)arg1 composer:(id)arg2;

- (void).cxx_destruct;
- (id)animation;
- (id)composer;
- (void)setAnimation:(id)arg1;
- (void)setComposer:(id)arg1;

@end
