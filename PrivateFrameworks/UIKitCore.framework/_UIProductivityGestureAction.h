
@interface _UIProductivityGestureAction : BSAction

@property (nonatomic, readonly) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (nonatomic, readonly) long long gestureDirection;

- (long long)UIActionType;
- (void)_handleActionForWindowScene:(id)arg1;
- (id)authenticationMessage;
- (long long)gestureDirection;
- (id)initWithGestureDirection:(long long)arg1 authenticationMessage:(id)arg2;

@end
