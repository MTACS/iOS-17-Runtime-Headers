
@interface SBAutoPIPWorkspaceTransaction : SBWorkspaceTransaction {
    SBApplicationSceneEntity * _entityToPIP;
    long long  _inferredTransitionStyle;
    int  _pidToPIP;
    SBPIPController * _pipController;
    SBPIPControllerCoordinator * _pipCoordinator;
    NSString * _reason;
    bool  _startPictureInPictureDidComplete;
    long long  _transitionStyle;
}

@property (nonatomic, readonly, copy) SBApplicationSceneEntity *entityToPIP;
@property (nonatomic) long long transitionStyle;

+ (bool)shouldAutoPIPEnteringBackgroundForRequest:(id)arg1;
+ (bool)shouldAutoPIPEnteringBackgroundForRequest:(id)arg1 foundEntity:(id*)arg2;
+ (bool)shouldAutoPIPEnteringBackgroundForRequest:(id)arg1 foundEntity:(id*)arg2 tetheringMode:(long long*)arg3 transitionStyle:(long long*)arg4 reason:(long long)arg5;
+ (bool)shouldAutoPIPEnteringBackgroundForRequest:(id)arg1 foundEntity:(id*)arg2 transitionStyle:(long long*)arg3;
+ (bool)shouldAutoPIPEnteringBackgroundForRequest:(id)arg1 reason:(long long)arg2;
+ (bool)shouldAutoPIPEnteringBackgroundForRequest:(id)arg1 tetheringMode:(long long*)arg2 reason:(long long)arg3;
+ (bool)shouldAutoPIPEnteringBackgroundForRequest:(id)arg1 transitionStyle:(long long*)arg2;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)entityToPIP;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 includeActiveAppEntity:(bool)arg2 reason:(long long)arg3;
- (void)setTransitionStyle:(long long)arg1;
- (long long)transitionStyle;

@end
