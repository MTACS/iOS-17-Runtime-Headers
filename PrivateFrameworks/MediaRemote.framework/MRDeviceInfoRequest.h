
@interface MRDeviceInfoRequest : NSObject

+ (id)cachedDeviceInfoForOrigin:(id)arg1;
+ (id)deviceInfoForOrigin:(id)arg1;
+ (void)deviceInfoForOrigin:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
+ (void)deviceInfoForUID:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
+ (id)localDeviceInfo;

@end
