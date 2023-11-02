
@interface HMDHomeEventsGenerated : NSObject

+ (id)accessoryTopicsForAccessory:(id)arg1 homeUUID:(id)arg2;
+ (id)allTopics;
+ (id)clientIndexToHomeTopicsForHomeUUID:(id)arg1;
+ (id)expandedTopicsWithTopics:(id)arg1 homeManager:(id)arg2;
+ (id)forwardingTopicsWithTopics:(id)arg1 forHomeRouterWithUUID:(id)arg2;
+ (id)homeInfoIndexForHomeUUID:(id)arg1;
+ (id)indexTopicForTopicSuffix:(id)arg1 indexName:(id)arg2;
+ (bool)isHomeInfoIndexTopic:(id)arg1 homeUUID:(id)arg2;
+ (id)topicMap;
+ (id)upstreamClientTopicForTopic:(id)arg1;
+ (id)upstreamHomeAndAccessoryTopicsForTopic:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3;
+ (id)upstreamHomeTopicForTopic:(id)arg1 homeUUID:(id)arg2;
+ (id)upstreamTopicsForTopic:(id)arg1;

@end
