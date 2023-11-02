
@interface JFXEffectAnimationDelegate : NSObject <CAAnimationDelegate> {
    bool  _animationDidBegin;
    bool  _animationDidEnd;
    id /* block */  _completion;
}

@property (nonatomic) bool animationDidBegin;
@property (nonatomic) bool animationDidEnd;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithCompletion:(id /* block */)arg1;
- (bool)animationDidBegin;
- (bool)animationDidEnd;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id /* block */)completion;
- (void)setAnimationDidBegin:(bool)arg1;
- (void)setAnimationDidEnd:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
