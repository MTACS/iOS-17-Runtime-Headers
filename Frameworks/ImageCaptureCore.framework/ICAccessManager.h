
@interface ICAccessManager : NSObject

+ (void)addBundleIdentifier:(id)arg1;
+ (unsigned long long)bundleIdentifier:(id)arg1 stateForAccessType:(unsigned long long)arg2;
+ (id)bundleIdentifiersAccessingExternalMediaDevices;
+ (id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+ (bool)captureUserIntentForBundleIdentifier:(id)arg1 withNotification:(id)arg2;
+ (id)internalAccessType:(unsigned long long)arg1;
+ (void)revokeBundleIdentifier:(id)arg1;
+ (void)updateBundleIdentifier:(id)arg1 accessType:(unsigned long long)arg2 withState:(unsigned long long)arg3;
+ (void)updateBundleIdentifierAccessingExternalMediaDevices:(id)arg1 withStatus:(bool)arg2;

@end
