
@interface _GCExtendedMFiControllerProfile : NSObject <_GCControllerProfile>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)determineCapabilitiesWithServiceInfo:(id)arg1 initInfo:(struct { struct { id x_1_1_1; bool x_1_1_2; bool x_1_1_3; union { struct { int x_1_3_1; bool x_1_3_2; float x_1_3_3; long long x_1_3_4; } x_4_2_1; struct { int x_2_3_1; int x_2_3_2; int x_2_3_3; int x_2_3_4; } x_4_2_2; } x_1_1_4; int x_1_1_5; bool x_1_1_6; bool x_1_1_7; bool x_1_1_8; id x_1_1_9; id x_1_1_10; } x1[16]; bool x2; bool x3; }*)arg2;
+ (id)deviceManager;
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;
+ (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;
+ (id)logicalDeviceControllerProductCategory:(id)arg1;
+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;
+ (bool)physicalDeviceUsesACHomeForMenu:(id)arg1;
+ (void)populateInitInfo:(struct { struct { id x_1_1_1; bool x_1_1_2; bool x_1_1_3; union { struct { int x_1_3_1; bool x_1_3_2; float x_1_3_3; long long x_1_3_4; } x_4_2_1; struct { int x_2_3_1; int x_2_3_2; int x_2_3_3; int x_2_3_4; } x_4_2_2; } x_1_1_4; int x_1_1_5; bool x_1_1_6; bool x_1_1_7; bool x_1_1_8; id x_1_1_9; id x_1_1_10; } x1[16]; bool x2; bool x3; }*)arg1 forLogicalDevice:(id)arg2;

@end
