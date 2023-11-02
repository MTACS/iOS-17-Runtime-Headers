
@interface CPSUtilities : NSObject

+ (bool)_associatedDomainIsApprovedForURL:(id)arg1 applicationIdentifier:(id)arg2 serviceType:(id)arg3;
+ (int)_deviceClass;
+ (bool)appClipAssociatedDomainIsApprovedForURL:(id)arg1 applicationIdentifier:(id)arg2;
+ (bool)deviceHasCapabilities:(id)arg1;
+ (bool)deviceHasHomeButton;
+ (bool)deviceIsLocked;
+ (bool)deviceIsPad;
+ (bool)isBundleIdentifierBeingInstalled:(id)arg1;
+ (bool)isNetworkConstrained;
+ (id)localizedDeviceName;
+ (id)lowercasedDeviceFamilyName;
+ (void)openAppWithBundleIdentifier:(id)arg1;
+ (id)openURL:(id)arg1;
+ (void)openURL:(id)arg1 inAppWithBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)openURL:(id)arg1 inAppWithBundleIdentifier:(id)arg2 promptForUnlock:(bool)arg3 originIsControlCenter:(bool)arg4 completionHandler:(id /* block */)arg5;
+ (id)openURL:(id)arg1 withOptions:(id)arg2;
+ (id)oppositeDeviceFamilyName;
+ (id)osVersion;
+ (id)poweredByCaptionForAppName:(id)arg1;
+ (id)productVariants;
+ (bool)shouldPlayHaptics;
+ (void)uninstallAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (bool)validDomainAssociationWithAnyServiceTypeForURL:(id)arg1 applicationIdentifier:(id)arg2;
+ (id)versionIdentifierForAppWithBundleIdentifier:(id)arg1 isPlaceholder:(bool*)arg2;

@end
