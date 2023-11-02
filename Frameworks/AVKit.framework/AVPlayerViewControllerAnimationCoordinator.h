
@interface AVPlayerViewControllerAnimationCoordinator : NSObject <AVPlayerViewControllerAnimationCoordinator> {
    NSMutableArray * _animations;
    NSMutableArray * _completions;
}

@property (nonatomic, readonly) NSMutableArray *animations;
@property (nonatomic, readonly) NSMutableArray *completions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCoordinatedAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)animations;
- (id)completions;
- (void)didFinishAnimations:(bool)arg1;
- (id)init;
- (void)performCoordinatedAnimations;

@end
