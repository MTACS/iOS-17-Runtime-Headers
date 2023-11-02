
@interface CRAttestationDeviceGen4Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isGen4Device:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
