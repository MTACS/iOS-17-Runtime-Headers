
@interface UIStatusBarTapAction : BSAction

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double xPosition;

- (long long)UIActionType;
- (id)initWithType:(long long)arg1 xPosition:(double)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)type;
- (double)xPosition;

@end
