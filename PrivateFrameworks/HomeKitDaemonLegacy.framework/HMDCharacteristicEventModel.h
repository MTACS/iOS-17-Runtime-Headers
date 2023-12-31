
@interface HMDCharacteristicEventModel : HMDCharacteristicEventBaseModel

@property (nonatomic, retain) id eventValue;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(bool)arg5 error:(id*)arg6;
+ (id)properties;

@end
