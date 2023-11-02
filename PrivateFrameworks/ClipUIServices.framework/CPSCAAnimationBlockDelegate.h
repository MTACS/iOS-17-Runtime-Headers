
@interface CPSCAAnimationBlockDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  _didStartHandler;
    id /* block */  _didStopHandler;
    id  _referenceToSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)attachToAnimation:(id)arg1 didStartHandler:(id /* block */)arg2 didStopHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;

@end
