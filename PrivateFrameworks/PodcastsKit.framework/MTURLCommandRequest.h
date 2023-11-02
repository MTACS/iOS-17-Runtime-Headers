
@interface MTURLCommandRequest : NSObject <NSCopying> {
    unsigned long long  _commandType;
    NSString * _episodeAdamId;
    NSString * _episodeUuid;
    long long  _playContext;
    long long  _playContextSortType;
    unsigned long long  _playQueueType;
    unsigned long long  _playReason;
    long long  _playbackOrder;
    NSString * _podcastAdamId;
    NSString * _podcastFeedUrl;
    NSString * _podcastUuid;
    NSString * _requesterDsid;
    NSString * _stationUuid;
    NSString * _urlString;
}

@property (nonatomic, readonly) unsigned long long commandType;
@property (nonatomic, readonly) NSString *episodeAdamId;
@property (nonatomic, readonly) NSString *episodeUuid;
@property (nonatomic, readonly) long long playContext;
@property (nonatomic, readonly) long long playContextSortType;
@property (nonatomic, readonly) unsigned long long playQueueType;
@property (nonatomic, readonly) unsigned long long playReason;
@property (nonatomic, readonly) long long playbackOrder;
@property (nonatomic, readonly) NSString *podcastAdamId;
@property (nonatomic, readonly) NSString *podcastFeedUrl;
@property (nonatomic, readonly) NSString *podcastUuid;
@property (nonatomic, readonly) NSString *requesterDsid;
@property (nonatomic, readonly) NSString *stationUuid;
@property (nonatomic, readonly) NSString *urlString;

- (void).cxx_destruct;
- (void)_loadQueryParameterValuesFromString:(id)arg1;
- (void)_lookupEpisodeUuidIfNecessaryFromURLString:(id)arg1;
- (void)_lookupPodcastUuidIfNecessaryFromURLString:(id)arg1;
- (unsigned long long)commandType;
- (id)copyWithPlayReason:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)episodeAdamId;
- (id)episodeUuid;
- (id)initWithURLString:(id)arg1;
- (long long)playContext;
- (long long)playContextSortType;
- (unsigned long long)playQueueType;
- (unsigned long long)playReason;
- (long long)playbackOrder;
- (id)podcastAdamId;
- (id)podcastFeedUrl;
- (id)podcastUuid;
- (id)requesterDsid;
- (id)stationUuid;
- (id)urlString;

@end
