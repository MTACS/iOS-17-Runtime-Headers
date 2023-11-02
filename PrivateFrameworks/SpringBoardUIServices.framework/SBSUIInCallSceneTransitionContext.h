
@interface SBSUIInCallSceneTransitionContext : UIApplicationSceneTransitionContext

@property (nonatomic, copy) NSString *analyticsSource;

- (id)analyticsSource;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setAnalyticsSource:(id)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
