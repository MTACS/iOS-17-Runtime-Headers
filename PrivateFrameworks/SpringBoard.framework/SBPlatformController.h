
@interface SBPlatformController : NSObject {
    bool  _carrierInstall;
    NSDictionary * _defaultIconState;
    NSOrderedSet * _defaultIconStateDisplayIdentifiers;
    bool  _internalInstall;
    NSString * _localizedDeviceName;
    long long  _medusaCapabilities;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadDefaultIconInfo;
- (id)defaultIconState;
- (id)defaultIconStateDisplayIdentifiers;
- (id)deviceClass;
- (id)hardwareModel;
- (id)init;
- (bool)isCarrierInstall;
- (bool)isHomeGestureEnabled;
- (bool)isInternalInstall;
- (bool)isMedusaCapable;
- (bool)isRoundCornerPad;
- (bool)isRoundCornerPhone;
- (bool)isiPadMini;
- (id)localizedPlatformName;
- (long long)medusaCapabilities;
- (bool)prefersAlwaysOnOrientation;
- (id)productType;
- (id)systemBuildVersion;
- (id)uniqueDeviceIdentifier;

@end
