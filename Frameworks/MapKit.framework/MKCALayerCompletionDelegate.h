
@interface MKCALayerCompletionDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)delegateWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;

@end
