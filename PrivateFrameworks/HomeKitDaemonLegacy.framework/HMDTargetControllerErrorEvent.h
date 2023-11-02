
@interface HMDTargetControllerErrorEvent : HMMLogEvent {
    HMDHAPAccessory * _accessory;
    unsigned long long  _errorType;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (nonatomic, readonly) unsigned long long errorType;

+ (id)errorEventWithErrorType:(unsigned long long)arg1 accessory:(id)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (unsigned long long)errorType;
- (id)initWithErrorType:(unsigned long long)arg1 accessory:(id)arg2;

@end
