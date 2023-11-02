
@interface SBSHardwareButtonService : SBSAbstractSystemService {
    BSMutableIntegerMap * _buttonConfigurationsPerKind;
    BSMutableIntegerMap * _consumersPerKind;
    BSMutableIntegerMap * _requestHIDAssertionsPerKind;
}

@property (nonatomic, retain) BSMutableIntegerMap *buttonConfigurationsPerKind;
@property (nonatomic, retain) BSMutableIntegerMap *consumersPerKind;
@property (nonatomic, retain) BSMutableIntegerMap *requestHIDAssertionsPerKind;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEventConsumerInfo:(id)arg1;
- (void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)_resetEventMaskForButtonKind:(long long)arg1;
- (void)_setApplicationClientEventMask:(unsigned long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3;
- (id)_viableConsumerForButtonKind:(long long)arg1 event:(long long)arg2 priority:(long long)arg3;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3;
- (id)buttonConfigurationsPerKind;
- (void)consumerInfoWillInvalidate:(id)arg1;
- (id)consumersPerKind;
- (id)deferHIDEventsForButtonKind:(long long)arg1 toToken:(id)arg2;
- (id)description;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(id /* block */)arg2;
- (void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (id)requestHIDAssertionsPerKind;
- (void)setButtonConfigurationsPerKind:(id)arg1;
- (void)setConsumersPerKind:(id)arg1;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)setRequestHIDAssertionsPerKind:(id)arg1;
- (long long)toggleStateForButtonKind:(long long)arg1;

@end
