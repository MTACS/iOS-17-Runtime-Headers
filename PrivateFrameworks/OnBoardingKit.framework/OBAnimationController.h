
@interface OBAnimationController : NSObject <OBAnimationAppearanceChangeDelegate> {
    NSArray * _animatedStates;
    OBAnimationView * _animationView;
    bool  _canceled;
    OBAnimationState * _firstState;
    CAPackage * _package;
    CAStateController * _stateController;
    unsigned long long  _stateIndex;
}

@property (nonatomic, retain) NSArray *animatedStates;
@property (nonatomic, retain) OBAnimationView *animationView;
@property (nonatomic) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) OBAnimationState *firstState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAPackage *package;
@property (nonatomic, retain) CAStateController *stateController;
@property (nonatomic) unsigned long long stateIndex;
@property (readonly) Class superclass;

+ (id)packageForURL:(id)arg1;

- (void).cxx_destruct;
- (id)_caStateForAnimationState:(id)arg1;
- (void)_initializeStartingStateForStopAnimation:(bool)arg1;
- (void)_startAnimationForLayer:(id)arg1;
- (void)_stepAnimationStatesForLayer:(id)arg1;
- (id)animatedStates;
- (id)animationView;
- (bool)canceled;
- (id)firstState;
- (id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 animatedStates:(id)arg3 startAtFirstState:(id)arg4;
- (id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 sizingTransformScale:(double)arg3 animatedStates:(id)arg4 startAtFirstState:(id)arg5;
- (id)package;
- (void)setAnimatedStates:(id)arg1;
- (void)setAnimationView:(id)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setFirstState:(id)arg1;
- (void)setPackage:(id)arg1;
- (void)setStateController:(id)arg1;
- (void)setStateIndex:(unsigned long long)arg1;
- (void)startAnimation;
- (id)stateController;
- (unsigned long long)stateIndex;
- (void)stopAnimation;
- (void)updateAnimationForAppearanceChange;

@end
