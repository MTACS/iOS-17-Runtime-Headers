
@interface STAppInfo : NSObject {
    NSData * _artworkData;
    NSURL * _artworkURL;
    NSString * _bundleIdentifier;
    NSString * _developerName;
    NSString * _displayName;
    NSURL * _localURL;
    short  _platform;
    NSString * _ratingLabel;
    long long  _source;
}

@property (copy) NSData *artworkData;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *developerName;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSURL *localURL;
@property (nonatomic) short platform;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) long long source;

- (void).cxx_destruct;
- (id)artworkData;
- (id)artworkURL;
- (id)bundleIdentifier;
- (id)description;
- (id)developerName;
- (id)displayName;
- (id)localURL;
- (short)platform;
- (id)ratingLabel;
- (void)setArtworkData:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeveloperName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setPlatform:(short)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
