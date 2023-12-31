
@interface HFIrrigationValveServiceState : HFServiceState {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (unsigned long long)_typeForSystemActiveState:(bool)arg1 usageState:(long long)arg2;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;

- (id)initWithBatchReadResponse:(id)arg1;
- (bool)isTransitioning;
- (long long)primaryState;
- (long long)priority;
- (id)stateTypeIdentifier;
- (unsigned long long)type;

@end
