
@interface HMDPresenceEventModel : HMDEventModel

@property (nonatomic, retain) NSNumber *activation;
@property (nonatomic, retain) NSString *presenceType;
@property (nonatomic, retain) NSArray *users;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;
+ (id)properties;

@end
