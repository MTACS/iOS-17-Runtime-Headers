
@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding> {
    NSData * _accessToken;
    NSDate * _expiresAt;
    NSData * _refreshToken;
    bool  _shouldCache;
}

@property (nonatomic, retain) NSData *accessToken;
@property (nonatomic, retain) NSDate *expiresAt;
@property (nonatomic, retain) NSData *refreshToken;
@property (nonatomic) bool shouldCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresAt;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)refreshToken;
- (void)setAccessToken:(id)arg1;
- (void)setExpiresAt:(id)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setShouldCache:(bool)arg1;
- (bool)shouldCache;

@end
