
@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata {
    NSString * _canonicalSeasonID;
    NSString * _canonicalShowID;
    double  _duration;
    NSNumber * _episodeNumber;
    WLKPlayable * _playable;
    NSDate * _releaseDate;
    WLKArtworkVariantListing * _seasonImages;
    NSNumber * _seasonNumber;
    NSString * _seasonTitle;
    WLKArtworkVariantListing * _showImages;
    NSString * _showTitle;
}

@property (nonatomic, readonly, copy) NSString *canonicalSeasonID;
@property (nonatomic, readonly, copy) NSString *canonicalShowID;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSNumber *episodeNumber;
@property (nonatomic, readonly) WLKPlayable *playable;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) WLKArtworkVariantListing *seasonImages;
@property (nonatomic, readonly) NSNumber *seasonNumber;
@property (nonatomic, readonly) NSString *seasonTitle;
@property (nonatomic, readonly) WLKArtworkVariantListing *showImages;
@property (nonatomic, readonly, copy) NSString *showTitle;

+ (id)episodesWithDictionaries:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)canonicalSeasonID;
- (id)canonicalShowID;
- (double)duration;
- (id)episodeNumber;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)initWithDictionary:(id)arg1 context:(id)arg2 playablesDict:(id)arg3 playablesId:(id)arg4 seasonsDict:(id)arg5;
- (id)playable;
- (id)releaseDate;
- (id)seasonImages;
- (id)seasonNumber;
- (id)seasonTitle;
- (id)showImages;
- (id)showTitle;

@end
