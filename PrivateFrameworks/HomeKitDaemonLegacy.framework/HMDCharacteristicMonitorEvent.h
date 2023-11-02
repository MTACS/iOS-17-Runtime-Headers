
@interface HMDCharacteristicMonitorEvent : HMDCharacteristicEvent

+ (id)logCategory;

- (bool)_compareEventValue:(id)arg1;
- (bool)_evaluateNewValue:(id)arg1;
- (id)description;
- (bool)isCompatibleWithEvent:(id)arg1;

@end
