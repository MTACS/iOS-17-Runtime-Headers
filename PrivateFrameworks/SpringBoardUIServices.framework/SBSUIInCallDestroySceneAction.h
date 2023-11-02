
@interface SBSUIInCallDestroySceneAction : BSAction

@property (nonatomic, readonly, copy) NSString *analyticsSource;
@property (nonatomic, readonly) long long destructionReason;

- (id)analyticsSource;
- (long long)destructionReason;
- (id)initWithDestructionReason:(long long)arg1 analyticsSource:(id)arg2 timeout:(double)arg3 withResponseHandler:(id /* block */)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
