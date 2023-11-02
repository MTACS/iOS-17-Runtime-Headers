
@interface ASKClient : NSObject <ASKClientExports> {
    long long  _currentNotificationAuthorizationStatus;
    AMSPromise * _storefrontIdentifierPromise;
}

@property (readonly, copy) NSString *activePairedWatchSystemVersion;
@property (readonly) NSString *buildType;
@property long long currentNotificationAuthorizationStatus;
@property (readonly) NSString *deviceType;
@property (readonly, copy) NSString *guid;
@property (readonly) bool isActivityAvailable;
@property (readonly) bool isCharonSupported;
@property (readonly) bool isElectrocardiogramInstallationAllowed;
@property (readonly) bool isMandrakeSupported;
@property (readonly) bool isSidepackingEnabled;
@property (readonly) bool isTinkerWatch;
@property (readonly) bool newPaymentMethodEnabled;
@property (readonly) double screenCornerRadius;
@property (readonly) struct CGSize { double x1; double x2; } screenSize;
@property (readonly, copy) NSString *storefrontIdentifier;
@property (retain) AMSPromise *storefrontIdentifierPromise;
@property (readonly) bool supportsHEIF;
@property (readonly, copy) NSString *thinnedApplicationVariantIdentifier;

+ (id)getStorefrontIdentifierPromise:(id)arg1;

- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)arg1;
- (id)activePairedWatchSystemVersion;
- (void)applicationDidForeground:(id)arg1;
- (id)buildType;
- (bool)canUpdateNotificationAuthorizationStatus;
- (long long)currentNotificationAuthorizationStatus;
- (void)dealloc;
- (bool)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg1;
- (bool)deviceHasCapabilities:(id)arg1;
- (bool)deviceHasCapabilitiesIncludingCompatibilityCheck:(id)arg1 isVisionOSCompatibleIOSApp:(bool)arg2;
- (id)deviceType;
- (id)guid;
- (id)init;
- (bool)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;
- (bool)isActivityAvailable;
- (bool)isAuthorizedForUserNotifications;
- (bool)isAutomaticDownloadingEnabled;
- (bool)isCharonSupported;
- (bool)isElectrocardiogramInstallationAllowed;
- (bool)isMandrakeSupported;
- (id)isPairedSystemVersionAtLeast:(id)arg1;
- (bool)isSidepackingEnabled;
- (bool)isTinkerWatch;
- (bool)newPaymentMethodEnabled;
- (double)screenCornerRadius;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setCurrentNotificationAuthorizationStatus:(long long)arg1;
- (void)setStorefrontIdentifierPromise:(id)arg1;
- (id)storefrontIdentifier;
- (id)storefrontIdentifierPromise;
- (bool)supportsHEIF;
- (id)thinnedApplicationVariantIdentifier;
- (void)updateNotificationAuthorisationStatus;

@end
