
@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding> {
    bool  _didPerformAlongsideTransitions;
    bool  _isCompleted;
    NSMutableArray * _transitionBlocks;
    bool  _transitionCompletedSuccessfully;
    NSMutableArray * _transitionCompletionBlocks;
    bool  animated;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)completeTransition:(bool)arg1;
- (bool)isAnimated;
- (void)performAlongsideTransitions;
- (void)setAnimated:(bool)arg1;
- (void)transitionAlongsideUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
