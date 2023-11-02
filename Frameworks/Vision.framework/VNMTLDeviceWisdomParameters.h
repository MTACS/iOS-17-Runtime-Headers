
@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_cachedMetalDeviceWisdomParametersAndReturnError:(id*)arg1;
- (void)_flushMetalDeviceWisdomParametersCache;
- (id)_wisdomResourcesPath;
- (id)wisdomParameterForMTLDevice:(id)arg1 error:(id*)arg2;
- (id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id*)arg2;

@end
