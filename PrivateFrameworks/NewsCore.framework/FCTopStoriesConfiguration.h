
@interface FCTopStoriesConfiguration : NSObject <NSCopying> {
    NSString * _channelID;
    NSDictionary * _configDict;
    NTPBTopStoriesConfig * _pbConfig;
    bool  _promotingEnabled;
    long long  _storyTypeTimeout;
    NSDictionary * _styleConfigurations;
}

@property (nonatomic, readonly) NSString *channelID;
@property (getter=isPromotingEnabled, nonatomic, readonly) bool promotingEnabled;
@property (nonatomic, readonly) long long storyTypeTimeout;
@property (nonatomic, readonly) NSDictionary *styleConfigurations;

- (void).cxx_destruct;
- (id)channelID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPromotingEnabled;
- (long long)storyTypeTimeout;
- (id)styleConfigurations;

@end
