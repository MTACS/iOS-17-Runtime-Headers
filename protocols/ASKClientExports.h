
@protocol ASKClientExports <JSExport>

@required

- (NSString *)activePairedWatchSystemVersion;
- (NSString *)buildType;
- (bool)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(NSString *)arg1;
- (bool)deviceHasCapabilities:(NSArray *)arg1;
- (bool)deviceHasCapabilitiesIncludingCompatibilityCheck:(NSArray *)arg1 isVisionOSCompatibleIOSApp:(bool)arg2;
- (NSString *)deviceType;
- (NSString *)guid;
- (bool)isActivePairedWatchSystemVersionAtLeastMajorVersion:(JSValue *)arg1 minorVersion:(JSValue *)arg2 patchVersion:(JSValue *)arg3;
- (bool)isActivityAvailable;
- (bool)isAuthorizedForUserNotifications;
- (bool)isAutomaticDownloadingEnabled;
- (bool)isCharonSupported;
- (bool)isElectrocardiogramInstallationAllowed;
- (bool)isMandrakeSupported;
- (JSValue *)isPairedSystemVersionAtLeast:(JSValue *)arg1;
- (bool)isSidepackingEnabled;
- (bool)isTinkerWatch;
- (bool)newPaymentMethodEnabled;
- (double)screenCornerRadius;
- (struct CGSize { double x1; double x2; })screenSize;
- (NSString *)storefrontIdentifier;
- (bool)supportsHEIF;
- (NSString *)thinnedApplicationVariantIdentifier;

@end
