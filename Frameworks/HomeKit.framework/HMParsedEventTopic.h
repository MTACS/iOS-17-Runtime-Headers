
@interface HMParsedEventTopic : NSObject <HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedHomeEventTopic, HMParsedIndexAccessoryEventTopic, HMParsedIndexHomeEventTopic, HMParsedMediaGroupSettingEventTopic, HMParsedMediaSystemSettingEventTopic> {
    NSString * _accessorySettingKeyPath;
    NSUUID * _accessoryUUID;
    NSUUID * _homeUUID;
    bool  _isIndexTopic;
    NSString * _mediaGroupSettingKeyPath;
    NSUUID * _mediaGroupUUID;
    NSString * _mediaSystemSettingKeyPath;
    NSUUID * _mediaSystemUUID;
    NSString * _originalTopic;
    NSString * _topicSuffix;
    NSUUID * _userUUID;
}

@property (nonatomic, readonly) unsigned long long accessoryEventTopicSuffixID;
@property (nonatomic, copy) NSString *accessorySettingKeyPath;
@property (nonatomic, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly) unsigned long long homeEventTopicSuffixID;
@property (nonatomic, copy) NSUUID *homeUUID;
@property (nonatomic) bool isIndexTopic;
@property (nonatomic, copy) NSString *mediaGroupSettingKeyPath;
@property (nonatomic, copy) NSUUID *mediaGroupUUID;
@property (nonatomic, copy) NSString *mediaSystemSettingKeyPath;
@property (nonatomic, copy) NSUUID *mediaSystemUUID;
@property (nonatomic, readonly, copy) NSString *originalTopic;
@property (nonatomic, copy) NSString *topicSuffix;
@property (nonatomic, copy) NSUUID *userUUID;

- (void).cxx_destruct;
- (unsigned long long)accessoryEventTopicSuffixID;
- (id)accessorySettingKeyPath;
- (id)accessoryUUID;
- (id)asAccessorySettingTopic;
- (id)asAccessoryTopic;
- (id)asHomeEventTopic;
- (id)asIndexAccessoryTopic;
- (id)asIndexHomeTopic;
- (id)asMediaGroupSettingTopic;
- (id)asMediaSystemSettingTopic;
- (id)description;
- (unsigned long long)homeEventTopicSuffixID;
- (id)homeUUID;
- (id)initWithTopic:(id)arg1;
- (bool)isIndexTopic;
- (id)mediaGroupSettingKeyPath;
- (id)mediaGroupUUID;
- (id)mediaSystemSettingKeyPath;
- (id)mediaSystemUUID;
- (id)originalTopic;
- (void)setAccessorySettingKeyPath:(id)arg1;
- (void)setAccessoryUUID:(id)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)setIsIndexTopic:(bool)arg1;
- (void)setMediaGroupSettingKeyPath:(id)arg1;
- (void)setMediaGroupUUID:(id)arg1;
- (void)setMediaSystemSettingKeyPath:(id)arg1;
- (void)setMediaSystemUUID:(id)arg1;
- (void)setTopicSuffix:(id)arg1;
- (void)setUserUUID:(id)arg1;
- (id)topicSuffix;
- (id)userUUID;

@end
