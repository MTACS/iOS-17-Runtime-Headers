
@interface HMDCharacteristicThresholdRangeEventModel : HMDCharacteristicEventBaseModel

@property (nonatomic, retain) NSNumber *max;
@property (nonatomic, retain) NSNumber *min;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(bool)arg5;
+ (id)properties;

@end
