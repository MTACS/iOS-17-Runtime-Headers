
@interface SBUIBackgroundContentTouchAction : BSAction

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;

- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
