
@interface LANotificationUIAppearance : LANotificationOfBooleanState

@property (nonatomic, readonly) bool didDisappear;
@property (nonatomic, readonly) bool isDisplayed;
@property (nonatomic, readonly) bool willAppear;

- (id)darwinNotificationForBoolValue:(bool)arg1;
- (bool)didDisappear;
- (bool)isDisplayed;
- (void)newValue:(id)arg1 oldValue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)willAppear;

@end
