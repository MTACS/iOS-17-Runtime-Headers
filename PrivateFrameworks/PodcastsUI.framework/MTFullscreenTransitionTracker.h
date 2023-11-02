
@interface MTFullscreenTransitionTracker : NSObject {
    bool  _isTransitioning;
    NSMutableArray * _pendingBlocks;
}

@property (nonatomic) bool isTransitioning;
@property (nonatomic, retain) NSMutableArray *pendingBlocks;

+ (bool)isTransitioning;
+ (void)performAfterTransitioning:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)didFinishTransition:(id)arg1;
- (id)init;
- (bool)isTransitioning;
- (id)pendingBlocks;
- (void)setIsTransitioning:(bool)arg1;
- (void)setPendingBlocks:(id)arg1;
- (void)willBeginTransition:(id)arg1;

@end
