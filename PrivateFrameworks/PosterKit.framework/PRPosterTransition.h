
@interface PRPosterTransition : NSObject {
    NSArray * _actions;
    BSAnimationSettings * _animationSettings;
    bool  _contentSignificantlyChanged;
    FBSSceneSettingsDiff * _settingsDiff;
    unsigned long long  _significantEvent;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) BSAnimationSettings *animationSettings;
@property (nonatomic) bool contentSignificantlyChanged;
@property (nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (nonatomic) unsigned long long significantEvent;

- (void).cxx_destruct;
- (id)actions;
- (id)animationSettings;
- (bool)contentSignificantlyChanged;
- (bool)fromWakeTimer;
- (void)setActions:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setContentSignificantlyChanged:(bool)arg1;
- (void)setSettingsDiff:(id)arg1;
- (void)setSignificantEvent:(unsigned long long)arg1;
- (id)settingsDiff;
- (unsigned long long)significantEvent;

@end
