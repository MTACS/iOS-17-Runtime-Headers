
@interface ASKMobileGestalt : NSObject

+ (id)activePairedSystemVersion;
+ (id)deviceClass;
+ (bool)hasCapabilities:(id)arg1;
+ (bool)hasCapabilitiesIncludingCompatibilityCheck:(id)arg1 isVisionOSCompatibleIOSApp:(bool)arg2;
+ (bool)hasHEVCDecoding;
+ (bool)hasSystemTelephonyOfAnyKind;
+ (bool)hasVenice;
+ (bool)isAppleSiliconMac;
+ (bool)isCharonSupported;
+ (bool)isMandrakeSupported;
+ (bool)isStandaloneWatch;
+ (double)mainScreenScale;
+ (struct CGSize { double x1; double x2; })mainScreenSize;
+ (id)productType;
+ (bool)wapiCapability;

@end
