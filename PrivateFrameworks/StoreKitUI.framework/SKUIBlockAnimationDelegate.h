
@interface SKUIBlockAnimationDelegate : NSObject {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithCompletionHandler:(id /* block */)arg1;

@end
