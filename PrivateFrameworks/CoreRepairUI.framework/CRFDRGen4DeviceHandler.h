
@interface CRFDRGen4DeviceHandler : CRFDRBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isGen4ProductType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg1 withError:(id*)arg2;
- (bool)getMakeDataClassesAndInstancesWithPartSPC:(id)arg1 fdrRemote:(struct __AMFDR { }*)arg2 propertiesFromParam:(id)arg3 makeClasses:(id*)arg4 makeInstances:(id*)arg5 makePropertiesDict:(id*)arg6 fdrError:(id*)arg7;
- (id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg1 fdrRemote:(struct __AMFDR { }*)arg2 propertiesFromParam:(id)arg3 makePropertiesDict:(id*)arg4 fdrError:(id*)arg5;
- (id)spcInPartSPC:(id)arg1 withDataClass:(id)arg2;
- (long long)validateDisplaySwapped:(id)arg1 lessThan:(id)arg2;

@end
