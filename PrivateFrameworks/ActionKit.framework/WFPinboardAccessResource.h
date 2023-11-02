
@interface WFPinboardAccessResource : WFAccessResource

+ (id)pinboardPassword;
+ (id)pinboardToken;
+ (id)pinboardUsername;
+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (bool)canLogOut;
- (id)icon;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)name;
- (id)protectedResourceDescription;
- (id)resourceName;
- (unsigned long long)status;
- (id)username;

@end
