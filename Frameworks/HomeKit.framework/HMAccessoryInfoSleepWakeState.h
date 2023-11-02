
@interface HMAccessoryInfoSleepWakeState : NSObject {
    unsigned long long  _sleepWakeState;
}

@property (readonly) unsigned long long sleepWakeState;

- (id)description;
- (unsigned long long)hash;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (id)initWithSleepWakeState:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)protoData;
- (id)protoPayload;
- (unsigned long long)sleepWakeState;

@end
