
@protocol HMParsedAccessoryEventTopic

@required

- (unsigned long long)accessoryEventTopicSuffixID;
- (NSUUID *)accessoryUUID;
- (NSUUID *)homeUUID;

@end
