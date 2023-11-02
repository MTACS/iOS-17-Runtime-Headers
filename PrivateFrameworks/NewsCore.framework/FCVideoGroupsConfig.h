
@interface FCVideoGroupsConfig : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _configDictionary;
    unsigned long long  _moreVideosGroupFilterOption;
    unsigned long long  _moreVideosGroupSortOption;
    NTPBVideoGroupsConfig * _pbVideoGroupsConfig;
}

@property (nonatomic, copy) NSDictionary *configDictionary;
@property (nonatomic, readonly) bool moreFromPublisherBarEnabled;
@property (nonatomic, readonly) long long moreFromPublisherBarTime;
@property (nonatomic) unsigned long long moreVideosGroupFilterOption;
@property (nonatomic, readonly) long long moreVideosGroupMaxNumberOfVideos;
@property (nonatomic, readonly) long long moreVideosGroupMinNumberOfVideos;
@property (nonatomic) unsigned long long moreVideosGroupSortOption;
@property (nonatomic, readonly) long long nowPlayingBarTime;
@property (nonatomic, copy) NTPBVideoGroupsConfig *pbVideoGroupsConfig;
@property (nonatomic, readonly) bool playsMutedByDefault;
@property (nonatomic, readonly) long long upNextBarTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithVideoGroupsConfig:(id)arg1;
- (bool)moreFromPublisherBarEnabled;
- (long long)moreFromPublisherBarTime;
- (unsigned long long)moreVideosGroupFilterOption;
- (long long)moreVideosGroupMaxNumberOfVideos;
- (long long)moreVideosGroupMinNumberOfVideos;
- (unsigned long long)moreVideosGroupSortOption;
- (long long)nowPlayingBarTime;
- (id)pbVideoGroupsConfig;
- (bool)playsMutedByDefault;
- (void)setConfigDictionary:(id)arg1;
- (void)setMoreVideosGroupFilterOption:(unsigned long long)arg1;
- (void)setMoreVideosGroupSortOption:(unsigned long long)arg1;
- (void)setPbVideoGroupsConfig:(id)arg1;
- (long long)upNextBarTime;

@end
