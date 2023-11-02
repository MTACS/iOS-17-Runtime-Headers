
@interface MRPlayerPath : NSObject <NSCopying, NSSecureCoding> {
    MRClient * _client;
    MROrigin * _origin;
    MRPlayer * _player;
}

@property (nonatomic, copy) MRClient *client;
@property (nonatomic, readonly, copy) NSData *data;
@property (getter=isHomepodDemoApplication, nonatomic, readonly) bool homepodDemoApplication;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly) MRPlayerPath *localResolvedPlayerPath;
@property (nonatomic, copy) MROrigin *origin;
@property (nonatomic, copy) MRPlayer *player;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *protobuf;
@property (getter=isResolved, nonatomic, readonly) bool resolved;
@property (nonatomic, readonly) MRPlayerPath *skeleton;
@property (getter=isSystemBooksApplication, nonatomic, readonly) bool systemBooksApplication;
@property (getter=isSystemMediaApplication, nonatomic, readonly) bool systemMediaApplication;
@property (getter=isSystemPodcastsApplication, nonatomic, readonly) bool systemPodcastsApplication;

+ (id)anyPlayerPath;
+ (id)localPlayerPath;
+ (id)localResolvedPlayerPathFromPlayerPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)client;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithOrigin:(id)arg1 client:(id)arg2 player:(id)arg3;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHomepodDemoApplication;
- (bool)isLocal;
- (bool)isResolved;
- (bool)isSystemBooksApplication;
- (bool)isSystemMediaApplication;
- (bool)isSystemPodcastsApplication;
- (id)localResolvedPlayerPath;
- (id)origin;
- (id)player;
- (id)playerPathByLocalizingWithOrigin:(id)arg1;
- (id)playerPathByRedirectingToOrigin:(id)arg1;
- (id)protobuf;
- (void)setClient:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)skeleton;

@end
