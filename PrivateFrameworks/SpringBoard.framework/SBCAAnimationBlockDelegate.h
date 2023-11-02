
@interface SBCAAnimationBlockDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  _animationDidStartHandler;
    id /* block */  _animationDidStopHandler;
}

@property (nonatomic, copy) id /* block */ animationDidStartHandler;
@property (nonatomic, copy) id /* block */ animationDidStopHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (id /* block */)animationDidStartHandler;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id /* block */)animationDidStopHandler;
- (void)setAnimationDidStartHandler:(id /* block */)arg1;
- (void)setAnimationDidStopHandler:(id /* block */)arg1;

@end
