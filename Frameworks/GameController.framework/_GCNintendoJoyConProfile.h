
@interface _GCNintendoJoyConProfile : NSObject <_GCControllerProfile>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceManager;
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(id /* block */)arg2;
+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;

@end
