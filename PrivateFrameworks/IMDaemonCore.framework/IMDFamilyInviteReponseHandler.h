
@interface IMDFamilyInviteReponseHandler : NSObject

- (bool)canHandleNotificationResponse:(id)arg1 userNotificationCenter:(id)arg2;
- (void)handleNotificationResponse:(id)arg1 userNotificationCenter:(id)arg2 completionHandler:(id /* block */)arg3;

@end
