
@interface HMDTargetControllerCommandEvent : HMMLogEvent {
    HMDHAPAccessory * _accessory;
    unsigned long long  _commandType;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (nonatomic, readonly) unsigned long long commandType;

+ (id)commandEventWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (unsigned long long)commandType;
- (id)initWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;

@end
