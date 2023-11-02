
@interface CRAttestationDeviceGen2Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isGen2Device:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
