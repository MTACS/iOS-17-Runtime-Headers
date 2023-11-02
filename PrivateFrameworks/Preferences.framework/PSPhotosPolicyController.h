
@interface PSPhotosPolicyController : NSObject

- (id)_photosStatus:(id)arg1;
- (void)_setPhotosStatus:(id)arg1 specifier:(id)arg2;
- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2;
- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2 showPhotosAccess:(bool)arg3 showPhotosAddAccess:(bool)arg4;
- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2 showPhotosAccess:(bool)arg3 showPhotosAddAccess:(bool)arg4 showPickerUsage:(bool)arg5;
- (void)getAuthorizationStatesForService:(struct __CFString { }*)arg1 allowedArray:(id*)arg2 limitedArray:(id*)arg3 deniedArray:(id*)arg4;
- (void)setTCCForService:(struct __CFString { }*)arg1 appIdentifier:(id)arg2 value:(int)arg3;
- (void)setTCCForService:(struct __CFString { }*)arg1 appIdentifier:(id)arg2 value:(int)arg3 completion:(id /* block */)arg4;

@end
