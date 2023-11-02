
@interface ACUISActivitySceneAction : BSAction

@property (nonatomic, readonly) long long command;

- (long long)command;
- (id)initWithCommand:(long long)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
