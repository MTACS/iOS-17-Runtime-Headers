
@interface BMHealthKitWorkoutEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _activityType;
    NSString * _activityUUID;
    unsigned long long  _eventType;
    bool  _isFirstPartyDonation;
    bool  _isIndoor;
    bool  _isUpdate;
}

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *activityUUID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFirstPartyDonation;
@property (nonatomic, readonly) bool isIndoor;
@property (nonatomic, readonly) bool isUpdate;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)activityType;
- (id)activityUUID;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)eventType;
- (id)initWithIsFirstPartyDonation:(bool)arg1 isIndoor:(bool)arg2 activityType:(id)arg3 activityUUID:(id)arg4 eventType:(unsigned long long)arg5;
- (id)initWithIsFirstPartyDonation:(bool)arg1 isIndoor:(bool)arg2 activityType:(id)arg3 activityUUID:(id)arg4 eventType:(unsigned long long)arg5 isUpdate:(bool)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFirstPartyDonation;
- (bool)isIndoor;
- (bool)isUpdate;
- (id)proto;
- (id)serialize;
- (void)setActivityType:(id)arg1;
- (void)setActivityUUID:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;

@end
