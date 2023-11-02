
@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (id)deviceClass;
- (bool)isDeviceIPad;
- (bool)isDeviceIPhone;

@end
