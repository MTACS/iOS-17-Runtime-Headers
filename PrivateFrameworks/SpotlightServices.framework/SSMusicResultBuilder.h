
@interface SSMusicResultBuilder : SSResultBuilder {
    NSString * _album;
    NSString * _artist;
    NSDate * _creationDate;
    bool  _isExplicit;
    NSString * _mediaId;
    NSString * _song;
    NSNumber * _songLengthInSeconds;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) bool isExplicit;
@property (nonatomic, retain) NSString *mediaId;
@property (nonatomic, retain) NSString *song;
@property (nonatomic, retain) NSNumber *songLengthInSeconds;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (id)stringWithAlbum:(id)arg1 releaseDate:(id)arg2;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)creationDate;
- (id)initWithResult:(id)arg1;
- (bool)isExplicit;
- (id)mediaId;
- (unsigned long long)numberOfLinesForDescriptions;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setMediaId:(id)arg1;
- (void)setSong:(id)arg1;
- (void)setSongLengthInSeconds:(id)arg1;
- (id)song;
- (id)songLengthInSeconds;

@end
