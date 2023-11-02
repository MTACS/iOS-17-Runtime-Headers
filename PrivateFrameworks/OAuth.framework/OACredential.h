
@interface OACredential : NSObject {
    NSString * _consumerKey;
    NSString * _consumerSecret;
    NSString * _oauthToken;
    NSString * _oauthTokenSecret;
}

@property (nonatomic, copy) NSString *consumerKey;
@property (nonatomic, copy) NSString *consumerSecret;
@property (nonatomic, copy) NSString *oauthToken;
@property (nonatomic, copy) NSString *oauthTokenSecret;

- (id)consumerKey;
- (id)consumerSecret;
- (void)dealloc;
- (id)oauthToken;
- (id)oauthTokenSecret;
- (void)setConsumerKey:(id)arg1;
- (void)setConsumerSecret:(id)arg1;
- (void)setOauthToken:(id)arg1;
- (void)setOauthTokenSecret:(id)arg1;
- (id)signingKey;

@end
