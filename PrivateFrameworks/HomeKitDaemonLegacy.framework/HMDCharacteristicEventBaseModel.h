
@interface HMDCharacteristicEventBaseModel : HMDEventModel

@property (nonatomic, retain) NSString *accessory;
@property (nonatomic, retain) NSNumber *characteristicID;
@property (nonatomic, retain) NSNumber *serviceID;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 className:(Class)arg4 message:(id)arg5 checkForSupport:(bool)arg6 outCharateristic:(id*)arg7;
+ (id)properties;

- (id)dependentUUIDs;

@end
