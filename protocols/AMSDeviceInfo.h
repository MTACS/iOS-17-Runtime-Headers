
@protocol AMSDeviceInfo <NSObject>

@required

- (NSString *)MLBSerialNumber;
- (NSString *)ROMAddress;
- (long long)biometricState;
- (NSString *)buildVersion;
- (NSArray *)carrierNames;
- (AMSPromise *)carrierNamesPromise;
- (NSString *)compatibleProductType;
- (NSString *)deviceGUID;
- (bool)deviceIsAppleTV;
- (bool)deviceIsAppleTVSimulator;
- (bool)deviceIsAppleWatch;
- (bool)deviceIsAppleWatchSimulator;
- (bool)deviceIsAudioAccessory;
- (bool)deviceIsBundle;
- (bool)deviceIsMac;
- (bool)deviceIsPasscodeProtected;
- (bool)deviceIsRealityDevice;
- (bool)deviceIsRealityDeviceSimulator;
- (bool)deviceIsiPad;
- (bool)deviceIsiPadSimulator;
- (bool)deviceIsiPhone;
- (bool)deviceIsiPhoneSimulator;
- (bool)deviceIsiPod;
- (bool)deviceIsiPodSimulator;
- (NSString *)deviceName;
- (NSString *)hardwarePlatform;
- (bool)isRunningInStoreDemoMode;
- (bool)isSecureElementAvailable;
- (NSString *)localIPAddress;
- (NSString *)macAddress;
- (NSData *)macAddressData;
- (NSString *)modelPartNumber;
- (NSString *)name;
- (NSString *)operatingSystem;
- (NSString *)phoneNumber;
- (NSString *)productType;
- (NSString *)productVersion;
- (NSString *)regionCode;
- (NSNumber *)screenHeight;
- (NSNumber *)screenScale;
- (NSNumber *)screenWidth;
- (NSString *)secureElementID;
- (NSString *)serialNumber;
- (void)setBiometricState:(long long)arg1;
- (NSString *)thinnedAppVariantId;
- (NSString *)uniqueDeviceId;
- (AMSPromise *)voicePreferredPACToken;
- (AMSPhoneNumberContextInfo *)voicePreferredPhoneNumberContextInfo;

@end
