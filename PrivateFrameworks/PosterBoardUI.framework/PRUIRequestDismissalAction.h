
@interface PRUIRequestDismissalAction : BSAction

@property (getter=isAnimated, nonatomic, readonly) bool animated;

+ (id)actionWithAnimation:(bool)arg1;

- (bool)isAnimated;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
