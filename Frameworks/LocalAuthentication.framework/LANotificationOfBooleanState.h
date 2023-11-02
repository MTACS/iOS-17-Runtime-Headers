
@interface LANotificationOfBooleanState : LANotification {
    bool  _oldBoolValue;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) bool oldBoolValue;

+ (void)postNotificationWithNewBoolState:(bool)arg1;

- (bool)boolValue;
- (id)darwinNotificationForBoolValue:(bool)arg1;
- (id)darwinNotificationForValue:(id)arg1;
- (bool)oldBoolValue;

@end
