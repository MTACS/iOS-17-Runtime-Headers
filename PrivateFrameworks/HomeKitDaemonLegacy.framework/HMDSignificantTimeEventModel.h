
@interface HMDSignificantTimeEventModel : HMDEventModel

@property (nonatomic, retain) NSData *offset;
@property (nonatomic, retain) NSString *significantEvent;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;
+ (id)properties;

@end
