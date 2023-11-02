
@interface MTPodcastEpisodeFilter : NSObject {
    long long  _episodeTypeFilter;
    long long  _excludeExplicit;
    bool  _excludeGhostEpisodes;
    bool  _excludeUnentitled;
    NSString * _excludingEpisodeUuid;
    long long  _playStateFilter;
    bool  _restrictToUserEpisodes;
}

@property (nonatomic) long long episodeTypeFilter;
@property (nonatomic) long long excludeExplicit;
@property (nonatomic) bool excludeGhostEpisodes;
@property (nonatomic) bool excludeUnentitled;
@property (nonatomic, copy) NSString *excludingEpisodeUuid;
@property (nonatomic) long long playStateFilter;
@property (nonatomic) bool restrictToUserEpisodes;

+ (long long)playStateFilterFromExcludePlayed:(bool)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)episodeTypeFilter;
- (long long)excludeExplicit;
- (bool)excludeGhostEpisodes;
- (bool)excludeUnentitled;
- (id)excludingEpisodeUuid;
- (id)filterExcludingPlayed;
- (id)init;
- (long long)playStateFilter;
- (id)predicateForPodcast:(id)arg1;
- (bool)restrictToUserEpisodes;
- (void)setEpisodeTypeFilter:(long long)arg1;
- (void)setExcludeExplicit:(long long)arg1;
- (void)setExcludeGhostEpisodes:(bool)arg1;
- (void)setExcludeUnentitled:(bool)arg1;
- (void)setExcludingEpisodeUuid:(id)arg1;
- (void)setPlayStateFilter:(long long)arg1;
- (void)setRestrictToUserEpisodes:(bool)arg1;

@end
