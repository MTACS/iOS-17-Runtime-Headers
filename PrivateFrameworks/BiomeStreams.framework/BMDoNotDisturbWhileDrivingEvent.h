
@interface BMDoNotDisturbWhileDrivingEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    bool  _isStart;
    unsigned long long  _reason;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStart;
@property (nonatomic, readonly) unsigned long long reason;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)init;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithReason:(unsigned long long)arg1 isStart:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (unsigned long long)reason;
- (id)serialize;

@end
