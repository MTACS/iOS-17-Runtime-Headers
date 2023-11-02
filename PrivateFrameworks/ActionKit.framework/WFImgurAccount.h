
@interface WFImgurAccount : WFOAuth2Account

+ (id)clientID;
+ (id)clientSecret;
+ (id)localizedServiceName;
+ (id)redirectURI;
+ (id)responseType;
+ (id)serviceID;
+ (id)serviceName;
+ (id)sessionManager;

- (void)refreshWithCompletionHandler:(id /* block */)arg1;

@end
