
@interface HMAccessoryEventTopic : NSObject

+ (id)filterTopicsReplacingWithIndex:(id)arg1;
+ (unsigned long long)suffixIDFromTopicSuffix:(id)arg1;
+ (id)topicFromSuffixID:(unsigned long long)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3;
+ (id)topicPrefixWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2;

@end
