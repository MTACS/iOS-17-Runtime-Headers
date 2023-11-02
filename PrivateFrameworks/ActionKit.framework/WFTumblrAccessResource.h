
@interface WFTumblrAccessResource : WFAccessResource {
    NSString * _OAuthToken;
    NSString * _OAuthTokenSecret;
}

@property (nonatomic, copy) NSString *OAuthToken;
@property (nonatomic, copy) NSString *OAuthTokenSecret;

+ (id)keychain;
+ (void)setTumblrOAuthToken:(id)arg1;
+ (void)setTumblrOAuthTokenSecret:(id)arg1;
+ (id)tumblrOAuthToken;
+ (id)tumblrOAuthTokenSecret;
+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (void).cxx_destruct;
- (id)OAuthToken;
- (id)OAuthTokenSecret;
- (id)associatedAppIdentifier;
- (bool)canLogOut;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)protectedResourceDescription;
- (id)resourceName;
- (void)setOAuthToken:(id)arg1;
- (void)setOAuthTokenSecret:(id)arg1;
- (unsigned long long)status;
- (id)username;

@end
