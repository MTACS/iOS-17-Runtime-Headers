
@interface FCNewsTabiPersonalizedPaywallsConfiguration : NSObject {
    NSString * _channelIDsOutputName;
    NSString * _contextFeatureKey;
    NSString * _scoresOutputName;
}

@property (nonatomic, retain) NSString *channelIDsOutputName;
@property (nonatomic, retain) NSString *contextFeatureKey;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSString *scoresOutputName;

- (void).cxx_destruct;
- (id)channelIDsOutputName;
- (id)contextFeatureKey;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithContextFeatureKey:(id)arg1 channelIDsOutputName:(id)arg2 scoresOutputName:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)scoresOutputName;
- (void)setChannelIDsOutputName:(id)arg1;
- (void)setContextFeatureKey:(id)arg1;
- (void)setScoresOutputName:(id)arg1;

@end
