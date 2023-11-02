
@interface AMSUIDMobileGestalt : NSObject

+ (id)activePairedSystemVersion;
+ (id)deviceClass;
+ (bool)hasCapabilities:(id)arg1;
+ (bool)hasHEVCDecoding;
+ (bool)hasSystemTelephonyOfAnyKind;
+ (bool)hasVenice;
+ (bool)isTouchIDSupported;
+ (id)productType;
+ (bool)wapiCapability;

@end
