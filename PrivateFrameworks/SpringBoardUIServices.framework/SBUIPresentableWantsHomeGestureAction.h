
@interface SBUIPresentableWantsHomeGestureAction : BSAction

@property (nonatomic, readonly) bool wantsHomeGesture;

- (id)initWithWantsHomeGesture:(bool)arg1 handler:(id /* block */)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setSuccessful:(bool)arg1;
- (bool)wantsHomeGesture;

@end
