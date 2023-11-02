
@interface PRUIRequestDismissEntirelyAction : BSAction

@property (nonatomic, readonly) bool shouldActivateCurrentPoster;

+ (id)actionActivatingCurrentPoster:(bool)arg1;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (bool)shouldActivateCurrentPoster;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
