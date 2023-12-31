
@interface HFFaucetValveServiceState : HFServiceState {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (unsigned long long)_typeForSystemActiveState:(bool)arg1 heaterCoolerActiveState:(id)arg2 usageState:(long long)arg3 currentHeaterCoolerState:(id)arg4;
+ (id)optionalCharacteristicTypes;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;

- (id)initWithBatchReadResponse:(id)arg1;
- (bool)isTransitioning;
- (long long)primaryState;
- (long long)priority;
- (id)stateTypeIdentifier;
- (unsigned long long)type;

@end
