
@protocol HMParsedMediaGroupSettingEventTopic

@required

- (unsigned long long)accessoryEventTopicSuffixID;
- (NSUUID *)homeUUID;
- (NSString *)mediaGroupSettingKeyPath;
- (NSUUID *)mediaGroupUUID;

@end
