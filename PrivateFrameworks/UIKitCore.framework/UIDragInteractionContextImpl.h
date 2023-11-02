
@interface UIDragInteractionContextImpl : NSObject <UIDragAnimating, UIDragInteractionContext> {
    id /* block */  __sessionDidBegin;
    NSMutableArray * _animationBlocks;
    id /* block */  _animations;
    id /* block */  _completion;
    NSMutableArray * _completionBlocks;
    bool  _hasBegunDrag;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    UITouch * _initiationTouch;
    long long  _invocationType;
    NSArray * _items;
    bool  _preparedForLift;
    bool  _shouldAnimateLift;
    long long  _state;
}

@property (nonatomic, copy) id /* block */ _sessionDidBegin;
@property (nonatomic, readonly) NSMutableArray *animationBlocks;
@property (nonatomic, copy) id /* block */ animations;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBegunDrag;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocation;
@property (nonatomic, retain) UITouch *initiationTouch;
@property (nonatomic) long long invocationType;
@property (nonatomic, retain) NSArray *items;
@property (getter=isPreparedForLift, nonatomic) bool preparedForLift;
@property (nonatomic) bool shouldAnimateLift;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_api_addCompletion:(id /* block */)arg1;
- (id /* block */)_sessionDidBegin;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animationBlocks;
- (id /* block */)animations;
- (id /* block */)completion;
- (id)completionBlocks;
- (bool)hasBegunDrag;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (id)initiationTouch;
- (long long)invocationType;
- (bool)isPreparedForLift;
- (id)items;
- (void)setAnimations:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setHasBegunDrag:(bool)arg1;
- (void)setInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitiationTouch:(id)arg1;
- (void)setInvocationType:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setPreparedForLift:(bool)arg1;
- (void)setShouldAnimateLift:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)set_sessionDidBegin:(id /* block */)arg1;
- (bool)shouldAnimateLift;
- (long long)state;

@end
