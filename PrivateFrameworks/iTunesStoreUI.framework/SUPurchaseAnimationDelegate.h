
@interface SUPurchaseAnimationDelegate : NSObject {
    UIView * _view;
}

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end
