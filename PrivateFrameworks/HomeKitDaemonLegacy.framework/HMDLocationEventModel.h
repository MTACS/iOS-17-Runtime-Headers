
@interface HMDLocationEventModel : HMDEventModel

@property (nonatomic, retain) NSData *region;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;
+ (id)properties;

@end
