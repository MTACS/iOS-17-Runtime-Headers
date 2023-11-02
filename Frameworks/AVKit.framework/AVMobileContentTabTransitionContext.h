
@interface AVMobileContentTabTransitionContext : NSObject {
    <AVPlayerViewControllerAnimationCoordinator> * _animationCoordinator;
    unsigned long long  _direction;
}

@property (nonatomic, readonly) <AVPlayerViewControllerAnimationCoordinator> *animationCoordinator;
@property (nonatomic, readonly) unsigned long long direction;

- (void).cxx_destruct;
- (id)animationCoordinator;
- (unsigned long long)direction;
- (void)setAnimationCoordinator:(id)arg1;
- (void)setDirection:(unsigned long long)arg1;

@end
