
@interface SignpostSupportAnimationGraceTimeController : NSObject {
    SignpostSupportAnimationGraceTime * _defaultGraceTime;
    NSMutableDictionary * _subsystemGraceTimesDictionary;
    SignpostSupportAnimationGraceTime * _userInitiatedGraceTime;
    SignpostSupportAnimationGraceTime * _userInteractiveGraceTime;
}

@property (nonatomic, readonly) SignpostSupportAnimationGraceTime *defaultGraceTime;
@property (nonatomic) unsigned long long defaultGraceTimeMs;
@property (nonatomic, readonly) NSMutableDictionary *subsystemGraceTimesDictionary;
@property (nonatomic, readonly) SignpostSupportAnimationGraceTime *userInitiatedGraceTime;
@property (nonatomic) unsigned long long userInitiatedGraceTimeMs;
@property (nonatomic, readonly) SignpostSupportAnimationGraceTime *userInteractiveGraceTime;
@property (nonatomic) unsigned long long userInteractiveGraceTimeMs;

- (void).cxx_destruct;
- (void)_setFirstFrameGraceTime:(id)arg1 forSubsystem:(id)arg2 category:(id)arg3 name:(id)arg4;
- (id)debugDescription;
- (id)defaultGraceTime;
- (unsigned long long)defaultGraceTimeMs;
- (id)gracetimeForSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (unsigned long long)gracetimeMsForSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (id)init;
- (void)setAnimationType:(unsigned long long)arg1 forSubsystem:(id)arg2 category:(id)arg3 name:(id)arg4;
- (void)setDefaultGraceTimeMs:(unsigned long long)arg1;
- (void)setFirstFrameGraceTimeMs:(unsigned long long)arg1 forSubsystem:(id)arg2 category:(id)arg3 name:(id)arg4;
- (void)setUserInitiatedGraceTimeMs:(unsigned long long)arg1;
- (void)setUserInteractiveGraceTimeMs:(unsigned long long)arg1;
- (id)subsystemGraceTimesDictionary;
- (id)userInitiatedGraceTime;
- (unsigned long long)userInitiatedGraceTimeMs;
- (id)userInteractiveGraceTime;
- (unsigned long long)userInteractiveGraceTimeMs;

@end
