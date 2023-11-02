
@interface MTEpisodeLookupRequest : NSObject {
    NSString * _episodeGuid;
    NSString * _episodeTitle;
    long long  _persistentID;
    NSString * _podcastFeedUrl;
    NSString * _podcastTitle;
    long long  _storeTrackId;
    NSString * _streamUrl;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *episodeGuid;
@property (nonatomic, retain) NSString *episodeTitle;
@property (nonatomic) long long persistentID;
@property (nonatomic, retain) NSString *podcastFeedUrl;
@property (nonatomic, retain) NSString *podcastTitle;
@property (nonatomic) long long storeTrackId;
@property (nonatomic, retain) NSString *streamUrl;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (id)episodeGuid;
- (id)episodeTitle;
- (long long)persistentID;
- (id)podcastFeedUrl;
- (id)podcastTitle;
- (void)setEpisodeGuid:(id)arg1;
- (void)setEpisodeTitle:(id)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPodcastFeedUrl:(id)arg1;
- (void)setPodcastTitle:(id)arg1;
- (void)setStoreTrackId:(long long)arg1;
- (void)setStreamUrl:(id)arg1;
- (void)setUuid:(id)arg1;
- (long long)storeTrackId;
- (id)streamUrl;
- (id)uuid;

@end
