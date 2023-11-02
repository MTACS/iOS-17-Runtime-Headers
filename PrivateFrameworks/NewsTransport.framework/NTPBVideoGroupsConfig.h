
@interface NTPBVideoGroupsConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int moreFromPublisherBarTime : 1; 
        unsigned int moreVideosGroupMaxNumberOfVideos : 1; 
        unsigned int moreVideosGroupMinNumberOfVideos : 1; 
        unsigned int nowPlayingBarTime : 1; 
        unsigned int upNextBarTime : 1; 
        unsigned int moreVideosGroupFilterOption : 1; 
        unsigned int moreVideosGroupSortOption : 1; 
        unsigned int moreFromPublisherBarEnabled : 1; 
        unsigned int playsMutedByDefault : 1; 
    }  _has;
    bool  _moreFromPublisherBarEnabled;
    long long  _moreFromPublisherBarTime;
    int  _moreVideosGroupFilterOption;
    long long  _moreVideosGroupMaxNumberOfVideos;
    long long  _moreVideosGroupMinNumberOfVideos;
    int  _moreVideosGroupSortOption;
    long long  _nowPlayingBarTime;
    bool  _playsMutedByDefault;
    long long  _upNextBarTime;
}

@property (nonatomic) bool hasMoreFromPublisherBarEnabled;
@property (nonatomic) bool hasMoreFromPublisherBarTime;
@property (nonatomic) bool hasMoreVideosGroupFilterOption;
@property (nonatomic) bool hasMoreVideosGroupMaxNumberOfVideos;
@property (nonatomic) bool hasMoreVideosGroupMinNumberOfVideos;
@property (nonatomic) bool hasMoreVideosGroupSortOption;
@property (nonatomic) bool hasNowPlayingBarTime;
@property (nonatomic) bool hasPlaysMutedByDefault;
@property (nonatomic) bool hasUpNextBarTime;
@property (nonatomic) bool moreFromPublisherBarEnabled;
@property (nonatomic) long long moreFromPublisherBarTime;
@property (nonatomic) int moreVideosGroupFilterOption;
@property (nonatomic) long long moreVideosGroupMaxNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMinNumberOfVideos;
@property (nonatomic) int moreVideosGroupSortOption;
@property (nonatomic) long long nowPlayingBarTime;
@property (nonatomic) bool playsMutedByDefault;
@property (nonatomic) long long upNextBarTime;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMoreFromPublisherBarEnabled;
- (bool)hasMoreFromPublisherBarTime;
- (bool)hasMoreVideosGroupFilterOption;
- (bool)hasMoreVideosGroupMaxNumberOfVideos;
- (bool)hasMoreVideosGroupMinNumberOfVideos;
- (bool)hasMoreVideosGroupSortOption;
- (bool)hasNowPlayingBarTime;
- (bool)hasPlaysMutedByDefault;
- (bool)hasUpNextBarTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)moreFromPublisherBarEnabled;
- (long long)moreFromPublisherBarTime;
- (int)moreVideosGroupFilterOption;
- (long long)moreVideosGroupMaxNumberOfVideos;
- (long long)moreVideosGroupMinNumberOfVideos;
- (int)moreVideosGroupSortOption;
- (long long)nowPlayingBarTime;
- (bool)playsMutedByDefault;
- (bool)readFrom:(id)arg1;
- (void)setHasMoreFromPublisherBarEnabled:(bool)arg1;
- (void)setHasMoreFromPublisherBarTime:(bool)arg1;
- (void)setHasMoreVideosGroupFilterOption:(bool)arg1;
- (void)setHasMoreVideosGroupMaxNumberOfVideos:(bool)arg1;
- (void)setHasMoreVideosGroupMinNumberOfVideos:(bool)arg1;
- (void)setHasMoreVideosGroupSortOption:(bool)arg1;
- (void)setHasNowPlayingBarTime:(bool)arg1;
- (void)setHasPlaysMutedByDefault:(bool)arg1;
- (void)setHasUpNextBarTime:(bool)arg1;
- (void)setMoreFromPublisherBarEnabled:(bool)arg1;
- (void)setMoreFromPublisherBarTime:(long long)arg1;
- (void)setMoreVideosGroupFilterOption:(int)arg1;
- (void)setMoreVideosGroupMaxNumberOfVideos:(long long)arg1;
- (void)setMoreVideosGroupMinNumberOfVideos:(long long)arg1;
- (void)setMoreVideosGroupSortOption:(int)arg1;
- (void)setNowPlayingBarTime:(long long)arg1;
- (void)setPlaysMutedByDefault:(bool)arg1;
- (void)setUpNextBarTime:(long long)arg1;
- (long long)upNextBarTime;
- (void)writeTo:(id)arg1;

@end
