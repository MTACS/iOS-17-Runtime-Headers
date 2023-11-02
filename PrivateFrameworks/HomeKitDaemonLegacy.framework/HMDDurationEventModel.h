
@interface HMDDurationEventModel : HMDEventModel

@property (nonatomic, retain) NSNumber *duration;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;
+ (id)properties;

@end
