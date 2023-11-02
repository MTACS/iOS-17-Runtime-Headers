
@interface GestaltHlprMobileActivation : NSObject

+ (id)getSharedInstance;

- (void)addAGestaltKey:(struct __CFString { }*)arg1 toDictionary:(id)arg2 required:(bool)arg3 errors:(id)arg4;
- (id)copyAnswer:(struct __CFString { }*)arg1;
- (id)copyDeviceIDInfo:(id*)arg1;
- (id)copyDeviceInfo:(id*)arg1;
- (id)copyRegulatoryImagesInfo:(id*)arg1;
- (bool)getBoolAnswer:(struct __CFString { }*)arg1;
- (void)updateRecertInfo:(id)arg1 errors:(id*)arg2;

@end
