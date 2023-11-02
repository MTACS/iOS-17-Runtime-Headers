
@interface TCSBehavior : NSObject {
    int  _firstUnlockToken;
    bool  _isAppleInternalInstall;
    bool  _isM8Device;
    bool  _isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
    bool  _isRunningInStoreDemoModeOrSimulator;
    NSString * _regionCode;
}

@property (nonatomic, readonly) bool isAppleInternalInstall;
@property (nonatomic, readonly) bool isM8Device;
@property (nonatomic, readonly) bool isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (nonatomic, readonly) bool isRunningInStoreDemoModeOrSimulator;
@property (nonatomic, readonly) NSString *regionCode;

+ (bool)_isAppleInternalInstall;
+ (bool)_isM8Device;
+ (bool)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (bool)_isRunningInStoreDemoModeOrSimulator;
+ (id)_regionCode;
+ (bool)isAppleInternalInstall;
+ (bool)isM8Device;
+ (bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (bool)isRunningInStoreDemoModeOrSimulator;
+ (id)regionCode;
+ (id)sharedBehavior;

- (void).cxx_destruct;
- (void)_handleDeviceFirstUnlock;
- (void)dealloc;
- (id)init;
- (bool)isAppleInternalInstall;
- (bool)isM8Device;
- (bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
- (bool)isRunningInStoreDemoModeOrSimulator;
- (id)regionCode;

@end
