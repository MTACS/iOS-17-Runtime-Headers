
@interface CRAttestationDeviceGen3Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isGen3Device:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
