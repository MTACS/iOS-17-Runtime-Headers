
@interface _UISelectionGrabberAnimationDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)delegateWithCompletionBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;

@end
