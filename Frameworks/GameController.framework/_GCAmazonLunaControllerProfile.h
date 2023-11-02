
@interface _GCAmazonLunaControllerProfile : NSObject <_GCControllerProfile>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceManager;
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;
+ (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;
+ (id)logicalDeviceControllerProductCategory:(id)arg1;

@end
