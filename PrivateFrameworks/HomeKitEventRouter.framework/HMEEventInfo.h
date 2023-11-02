
@interface HMEEventInfo : NSObject {
    HMEEvent * _event;
    NSString * _topic;
}

@property (nonatomic, readonly) HMEEvent *event;
@property (nonatomic, readonly, copy) NSString *topic;

+ (id)eventInfoFromProtoData:(id)arg1;
+ (id)eventsMapFromEventInfos:(id)arg1;
+ (id)eventsMapFromProtoEvents:(id)arg1;
+ (id)fromProtobuff:(id)arg1;
+ (unsigned long long)topicAndMetadataMaxSizeInBytes;

- (void).cxx_destruct;
- (id)description;
- (id)event;
- (id)initWithEvent:(id)arg1 topic:(id)arg2;
- (id)pbEventInfo;
- (id)topic;

@end
