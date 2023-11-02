
@interface HMDAccessoryEventsGenerated : NSObject

+ (id)accessoryIndexForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;
+ (id)allTopics;
+ (id)appleMediaAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;
+ (id)endpointAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;
+ (id)forwardingTopicsForTopics:(id)arg1 residentAccessoryUUID:(id)arg2 homeUUID:(id)arg3;
+ (id)homePodAccessoryTopicsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;
+ (id)indexTopicForTopic:(id)arg1;
+ (id)topicMap;
+ (bool)topicSuffix:(id)arg1 isPartOfIndex:(id)arg2;
+ (id)topicsRemovingAccessoryTopics:(id)arg1 accessoryUUID:(id)arg2;

@end
