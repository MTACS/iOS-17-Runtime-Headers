
@interface CRAttestationDeviceGen1Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isGen1Device:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
