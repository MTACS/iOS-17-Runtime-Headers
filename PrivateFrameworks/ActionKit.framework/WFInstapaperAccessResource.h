
@interface WFInstapaperAccessResource : WFAccessResource

+ (void)initialize;
+ (id)instapaperToken;
+ (id)instapaperTokenSecret;
+ (id)instapaperUsername;
+ (id)keychain;
+ (void)setInstapaperToken:(id)arg1;
+ (void)setInstapaperTokenSecret:(id)arg1;
+ (void)setInstapaperUsername:(id)arg1;
+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (id)associatedAppIdentifier;
- (bool)canLogOut;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)protectedResourceDescription;
- (id)resourceName;
- (unsigned long long)status;
- (id)username;

@end
