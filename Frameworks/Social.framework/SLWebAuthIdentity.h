
@interface SLWebAuthIdentity : NSObject {
    NSString * _displayName;
    NSString * _idToken;
    NSString * _refreshToken;
    NSString * _token;
    NSString * _username;
    NSString * _youTubeUsername;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *idToken;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *youTubeUsername;

- (void).cxx_destruct;
- (id)displayName;
- (id)idToken;
- (id)initWithUsername:(id)arg1 token:(id)arg2 displayName:(id)arg3 refreshToken:(id)arg4 youTubeUsername:(id)arg5 idToken:(id)arg6;
- (id)refreshToken;
- (id)token;
- (id)username;
- (id)youTubeUsername;

@end
