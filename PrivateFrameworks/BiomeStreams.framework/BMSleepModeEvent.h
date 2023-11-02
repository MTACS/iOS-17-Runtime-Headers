
@interface BMSleepModeEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSDate * _expectedEndDate;
    unsigned long long  _sleepModeChangeReason;
    unsigned long long  _sleepModeState;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expectedEndDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sleepModeChangeReason;
@property (nonatomic, readonly) unsigned long long sleepModeState;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)expectedEndDate;
- (id)init;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSleepModeState:(unsigned long long)arg1;
- (id)initWithSleepModeState:(unsigned long long)arg1 sleepModeChangeReason:(unsigned long long)arg2 expectedEndDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (unsigned long long)sleepModeChangeReason;
- (unsigned long long)sleepModeState;

@end
