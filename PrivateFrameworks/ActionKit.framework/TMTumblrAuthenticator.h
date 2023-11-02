
@interface TMTumblrAuthenticator : NSObject {
    NSString * _OAuthConsumerKey;
    NSString * _OAuthConsumerSecret;
    id /* block */  _threeLeggedOAuthCallback;
    NSString * _threeLeggedOAuthTokenSecret;
}

@property (nonatomic, copy) NSString *OAuthConsumerKey;
@property (nonatomic, copy) NSString *OAuthConsumerSecret;
@property (nonatomic, copy) id /* block */ threeLeggedOAuthCallback;
@property (nonatomic, copy) NSString *threeLeggedOAuthTokenSecret;

+ (id)sharedInstance;
+ (void)signRequest:(id)arg1 withParameters:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 token:(id)arg5 tokenSecret:(id)arg6;

- (void).cxx_destruct;
- (id)OAuthConsumerKey;
- (id)OAuthConsumerSecret;
- (void)authenticate:(id)arg1 urlBlock:(id /* block */)arg2 callback:(id /* block */)arg3;
- (bool)handleOpenURL:(id)arg1;
- (void)setOAuthConsumerKey:(id)arg1;
- (void)setOAuthConsumerSecret:(id)arg1;
- (void)setThreeLeggedOAuthCallback:(id /* block */)arg1;
- (void)setThreeLeggedOAuthTokenSecret:(id)arg1;
- (id /* block */)threeLeggedOAuthCallback;
- (id)threeLeggedOAuthTokenSecret;
- (void)xAuth:(id)arg1 password:(id)arg2 callback:(id /* block */)arg3;

@end
