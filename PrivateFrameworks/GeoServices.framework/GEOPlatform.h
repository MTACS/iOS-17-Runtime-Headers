
@interface GEOPlatform : NSObject {
    NSObject<OS_dispatch_queue> * _coreTelephonyIsolationQueue;
    struct __CTServerConnection { } * _telephonyServerConnection;
}

+ (bool)isRunningInGeoAPd;
+ (bool)isRunningInGeod;
+ (void)setIsRunningInGeoAPd:(bool)arg1;
+ (void)setIsRunningInGeod:(bool)arg1;
+ (id)sharedPlatform;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)clientCapabilities;
- (id)deviceCountrySKU;
- (id)deviceCountrySKUForServiceRequests;
- (long long)deviceScreenHeightInPixels;
- (double)deviceScreenScale;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareClass;
- (id)hardwareIdentifier;
- (id)hardwareModel;
- (id)init;
- (bool)isCellDataPossible;
- (bool)isInternalInstall;
- (bool)isMacSetupUser;
- (bool)mapsFeatureFreedomEnabled;
- (id)osAndBuildVersion;
- (id)osVersion;
- (id)productName;
- (bool)supportsASTC;
- (bool)supportsAdvancedMap;
- (bool)supportsForceTouch;
- (bool)supportsMultiUser;
- (bool)supportsNavigation;
- (bool)supportsRealisticTiles;

@end
