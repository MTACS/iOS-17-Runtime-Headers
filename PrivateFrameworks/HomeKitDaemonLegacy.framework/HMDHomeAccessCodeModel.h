
@interface HMDHomeAccessCodeModel : HMDBackingStoreModelObject

@property (copy) NSString *label;
@property (copy) NSString *value;

+ (id)modelUUIDForHomeUUID:(id)arg1 accessCodeValue:(id)arg2;
+ (id)properties;

- (id)initWithHomeUUID:(id)arg1 value:(id)arg2 label:(id)arg3;

@end
