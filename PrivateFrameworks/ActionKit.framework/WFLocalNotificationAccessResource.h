
@interface WFLocalNotificationAccessResource : WFAccessResource

+ (bool)isSystemResource;
+ (void)requestLocalNotificationsAuthorizationWithCompletionHandler:(id /* block */)arg1;

- (id)icon;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)name;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
