
@protocol _GCDefaultLogicalDeviceDelegate <NSObject>

@required

- (GCPhysicalInputProfile *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (NSString *)logicalDeviceControllerProductCategory:(_GCDefaultLogicalDevice *)arg1;

@optional

- (_GCControllerDescription *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerForClient:(id)arg2;
- (_GCControllerInputComponentDescription *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerInputDescriptionWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2 bindings:(NSArray *)arg3;
- (GCMotion *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerMotionWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (_GCDevicePhysicalInputComponentDescription *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2 bindings:(NSArray *)arg3;
- (Class)logicalDeviceControllerDescriptionClass:(_GCDefaultLogicalDevice *)arg1;
- (NSString *)logicalDeviceControllerDetailedProductCategory:(_GCDefaultLogicalDevice *)arg1;
- (bool)logicalDeviceControllerIsAttachedToHost:(_GCDefaultLogicalDevice *)arg1;

@end
