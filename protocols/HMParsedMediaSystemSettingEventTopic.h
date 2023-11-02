
@protocol HMParsedMediaSystemSettingEventTopic

@required

- (unsigned long long)accessoryEventTopicSuffixID;
- (NSUUID *)homeUUID;
- (NSString *)mediaSystemSettingKeyPath;
- (NSUUID *)mediaSystemUUID;

@end
