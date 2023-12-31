
@interface HFIrrigationSystemServiceState : HFServiceState {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (unsigned long long)_typeForActiveState:(bool)arg1 usageState:(long long)arg2 programMode:(long long)arg3;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;

- (id)initWithBatchReadResponse:(id)arg1;
- (long long)primaryState;
- (long long)priority;
- (id)stateTypeIdentifier;
- (unsigned long long)type;

@end
