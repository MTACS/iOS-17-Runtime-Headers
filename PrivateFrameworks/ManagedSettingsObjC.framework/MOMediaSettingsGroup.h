
@interface MOMediaSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *denyBookstoreErotica;
@property (nonatomic, retain) NSNumber *denyExplicitContent;
@property (nonatomic, retain) NSNumber *denyMusicService;
@property (nonatomic, retain) NSNumber *maximumMovieRating;
@property (nonatomic, retain) NSNumber *maximumTVShowRating;

+ (id)denyBookstoreEroticaMetadata;
+ (id)denyExplicitContentMetadata;
+ (id)denyMusicServiceMetadata;
+ (id)groupName;
+ (id)maximumMovieRatingMetadata;
+ (id)maximumTVShowRatingMetadata;

- (id)denyBookstoreErotica;
- (id)denyExplicitContent;
- (id)denyMusicService;
- (id)maximumMovieRating;
- (id)maximumTVShowRating;
- (void)setDenyBookstoreErotica:(id)arg1;
- (void)setDenyExplicitContent:(id)arg1;
- (void)setDenyMusicService:(id)arg1;
- (void)setMaximumMovieRating:(id)arg1;
- (void)setMaximumTVShowRating:(id)arg1;

@end
