
@interface CRFDRGen6DeviceHandler : CRFDRGen3DeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isGen6ProductType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getPatchInfoPerSPC;
- (bool)supportPatch;

@end
