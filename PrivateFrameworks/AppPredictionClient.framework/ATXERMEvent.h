
@interface ATXERMEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    NSArray * _clientModelIds;
    ATXEngagementRecordEntry * _entry;
    NSDate * _eventDate;
    unsigned long long  _eventType;
}

@property (nonatomic, readonly) NSArray *clientModelIds;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ATXEngagementRecordEntry *entry;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)clientModelIds;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)entry;
- (id)eventDate;
- (unsigned long long)eventType;
- (id)init;
- (id)initWithEventDate:(id)arg1 eventType:(unsigned long long)arg2 recordEntry:(id)arg3 clientModelIds:(id)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXERMEvent:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)serialize;

@end
