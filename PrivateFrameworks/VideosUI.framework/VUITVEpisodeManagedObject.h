
@interface VUITVEpisodeManagedObject : VUIVideoManagedObject

@property (nonatomic, copy) NSNumber *episodeNumberInSeason;
@property (nonatomic, copy) NSNumber *episodeNumberInSeries;
@property (nonatomic, copy) NSNumber *fractionalEpisodeNumberInSeason;
@property (nonatomic, retain) VUITVSeasonManagedObject *season;
@property (nonatomic, retain) VUITVSeriesManagedObject *series;

@end
