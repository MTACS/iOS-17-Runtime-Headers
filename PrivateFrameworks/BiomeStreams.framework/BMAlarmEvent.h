
@interface BMAlarmEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSUUID * _alarmID;
    unsigned long long  _eventType;
    bool  _isSleepAlarm;
    unsigned long long  _lastEventType;
}

@property (nonatomic, readonly) NSUUID *alarmID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSleepAlarm;
@property (nonatomic, readonly) unsigned long long lastEventType;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)alarmID;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)eventType;
- (id)init;
- (id)initWithEventType:(unsigned long long)arg1 alarmID:(id)arg2 isSleepAlarm:(bool)arg3;
- (id)initWithEventType:(unsigned long long)arg1 lastEventType:(unsigned long long)arg2 alarmID:(id)arg3 isSleepAlarm:(bool)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSleepAlarm;
- (id)json;
- (id)jsonDict;
- (unsigned long long)lastEventType;
- (id)proto;
- (id)serialize;

@end
